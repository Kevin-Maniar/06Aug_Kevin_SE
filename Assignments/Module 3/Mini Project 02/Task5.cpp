 /* 
    Add a feature to delete a content item by its number from the list, update the file accordingly, and display the updated list to confirm deletion.
 */

#include<iostream>
#include<fstream>
using namespace std;

class content 
{
    string title,platform;
    int views;
    string status;
    string read_file;

    public:
    void MENU()
    {
        cout<<"|     Welcome To Content Idea Log Screen   |"<<endl;
        cout<<"|------------------------------------------|"<<endl;
        cout<<"| Press 1 too Add New Content Ideas -      |"<<endl;
        cout<<"| Press 2 too Read Data from file -        |"<<endl;
        cout<<"| Press 3 too update status of content -   |"<<endl;
        cout<<"| Press 4 to Delete Content Ideas -        |"<<endl;
        cout<<"| Press 5 too Log out From Menu -          |"<<endl;
        cout<<"|------------------------------------------|"<<endl;
    }

    void ACTION()
    {
        int choice;
        cout<<"| Welcome to Choice Feeling           |"<<endl;
        while(1)
        {
            cout<<"|-------------------------------------|"<<endl;
            cout<<"| What is Your Choice? - ";
            cin>>choice;
            cout<<"|-------------------------------------|"<<endl;

            switch(choice)
            {
                case 1:
                {
                    getchar();
                    cout<<"Enter Title of Your Content:";
                    getline(cin,title);
                    
                    cout<<"Enter Platform of Your Content:";
                    getline(cin,platform);
                    
                    cout<<"Enter Views of Your Content:";
                    cin>>views;
                    getchar();
                    cout<<"Enter Status of Your Content:";
                    getline(cin,status);

                    ofstream file("Content_Idea.txt",ios::app);

                    if(!file)
                    {
                        cout<<"Unable to open file";
                    }

                    else
                    {
                        file<<"Title    : "<<title<<endl;
                        file<<"PLatform : "<<platform<<endl;
                        file<<"Views    : "<<views<<endl;
                        file<<"Status   : "<<status<<endl;
                        file<<"------------------------------"<<endl;
                        cout<<"Data Inserted in file Successfully"<<endl;
                    }
                    break;
                }

                case 2:
                {
                    ifstream file("Content_Idea.txt");
                    if(!file)
                    {
                        cout<<"Unable to open a file";
                    }
                    else
                    {
                        string title_line;
                        string platform_line;
                        string views_line;
                        string status_line;
                        string format_line;

                        int count = 1;
                        while
                        (
                            getline(file,title_line)&&
                            getline(file,platform_line)&&
                            getline(file,views_line)&&
                            getline(file,status_line)&&
                            getline(file,format_line)
                        )
                        {
                            cout<<count<<". "<<title_line<<endl;
                            cout<<"   "<<platform_line<<endl;
                            cout<<"   "<<views_line<<endl;
                            cout<<"   "<<status_line<<endl;
                            cout<<"   "<<format_line<<endl;
                            count++;
                        }   
                        file.close();        
                    break;           
                    }
                }

                case 3:
                {
                    const int SIZE = 100;
                    string title    [SIZE];
                    string platform [SIZE];
                    string views    [SIZE];
                    string status   [SIZE];
                    string format   [SIZE];

                    int count = 0;

                    // Reading Phase

                    ifstream file("Content_Idea.txt");
                    if(!file)
                    {
                        cout<<"Unable to Open a file"<<endl;
                    }

                    else
                    {
                        while
                        (
                            count < SIZE &&
                            getline(file,title[count])&&
                            getline(file,platform[count])&&
                            getline(file,views[count])&&
                            getline(file,status[count])&&
                            getline(file,format[count])
 
                        )
                        {
                            count++;
                        }
                        // file.close();

                        if(count == 0)
                        {
                            cout<<"File is Empty!"<<endl;
                            break;
                        }
                        // Display Phase 
                        cout<<"|------------------------------------------|"<<endl;
                        cout<<"| - - - - - - Your Content Ideas - - - - - |"<<endl;
                        cout<<"|------------------------------------------|"<<endl<<endl;
                        for(int i = 0 ; i < count; i++)
                        {

                            cout<<i+1<<". "<< title[i] << endl;
                            cout<<"   "<< platform[i] <<endl;
                            cout<<"   "<< views[i] <<endl;
                            cout<<"   "<< status[i] <<endl;
                            cout<<"   "<< format[i] <<endl;
                        }

                        int Update_Status;

                        cout<<"Enter The Number of Content Idea where you want to update status - "<<endl;
                        cin>>Update_Status;

                        if(Update_Status < 1 || Update_Status > count)
                        {
                            cout<<"No Content Idea number Exist of your choice!"<<endl;
                            break;
                        }

                        string New_Status;

                        cout<<"Enter Your Updated Status: - ";
                        cin>>New_Status;

                        // Update Selected Array Element 

                        status[Update_Status - 1] = "Status   : " + New_Status;

                        // overwrite file 

                        ofstream file("Content_Idea.txt");

                        if(!file)
                        {
                            cout<<"Unable to open a file"<<endl;
                        }

                        for (int i = 0 ; i < count ; i++)
                        {
                            file<<title[i]<<endl;
                            file<<platform[i]<<endl;
                            file<<views[i]<<endl;
                            file<<status[i]<<endl;
                            file<<format[i]<<endl;
                        }

                        file.close();
                        cout<<"Status Updated Successfully"<<endl;
                    }
                    break;
                }

                case 4:
                {
                    string t[100],p[100],v[100],s[100],f[100];

                    int count = 0;

                    ifstream file("Content_Idea.txt");
                    
                    while
                    (
                        count < 100 &&
                        getline(file,t[count]) &&
                        getline(file,p[count]) &&
                        getline(file,v[count]) &&
                        getline(file,s[count]) &&
                        getline(file,f[count]) 
                    )
                    {
                        count ++;
                    }
                    file.close();

                    {
                        for(int i=0;i<count;i++)
                        {
                            cout<<i+1<<". "<<t[i]<<endl;
                        }
                    }

                    int num;
                    cout<<"Enter Number of Title You want to Delete : ";
                    cin>>num;

                    if(num > count || num < 1)
                    {
                        cout<<"Invalid Number ! No title exited with your number entry"<<endl;
                        break;
                    }

                    ofstream file1("Content_Idea.txt");

                    for(int i=0;i<count;i++)
                    {
                        if(i == num - 1)
                            continue;
                        file1 << t[i] << endl;
                        file1 << p[i] << endl;
                        file1 << v[i] << endl;
                        file1 << s[i] << endl;
                        file1 << f[i] << endl;
                    }

                    file.close();

                  cout << "Content deleted successfully!" << endl;
                    break;
                }

                case 5:
                {
                    cout<<"|-------------------------------------|"<<endl;
                    cout<<"|    Logging You Out! Visit Again     |"<<endl;
                    cout<<"|-------------------------------------|"<<endl;
                }
            }
            if(choice == 5)
            {
                break;
            }
        }
    }
};

int main()
{
    content ob;
    ob.MENU();
    ob.ACTION();
    return 0;
}