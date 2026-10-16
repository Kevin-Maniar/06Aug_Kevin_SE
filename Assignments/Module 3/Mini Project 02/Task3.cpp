/* 
    Implement a function to read all content items from content_list.txt and display them in a numbered list, showing title and platform for each.
*/#include<iostream>
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
        cout<<"|   Welcome To Content Idea Log Screen  |"<<endl;
        cout<<"|---------------------------------------|"<<endl;
        cout<<"| Press 1 too Add New Content Ideas -   |"<<endl;
        cout<<"| Press 2 too Read Data from file -     |"<<endl;
        cout<<"| Press 3 too Log out From Menu -       |"<<endl;
        cout<<"|---------------------------------------|"<<endl;
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
                            count++;
                        }   
                        file.close();        
                    break;           
                    }
                }

                case 3:
                {
                    cout<<"|-------------------------------------|"<<endl;
                    cout<<"|    Logging You Out! Visit Again     |"<<endl;
                    cout<<"|-------------------------------------|"<<endl;
                }
            }
            if(choice == 3)
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