/* 
    
Build a console menu that lets users add new content ideas (title, platform, views, status) and save each entry to a text file named content_list.txt.

Hint: Use file handling to append each new content item to the file.
*/

#include<iostream>
#include<fstream>
using namespace std;

class content 
{
    string title,platform;
    int views;
    string status;

    public:
    void MENU()
    {
        cout<<"| Welcome To Content Idea Log Screen  |"<<endl;
        cout<<"|-------------------------------------|"<<endl;
        cout<<"| Press 1 too Add New Content Ideas - |"<<endl;
        cout<<"| Press 2 too Log out From Menu -     |"<<endl;
        cout<<"|-------------------------------------|"<<endl;
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

                    ofstream file("Content_Idea.txt");

                    if(!file)
                    {
                        cout<<"Unable to open file";
                    }

                    else{
                        file<<"| Title    : "<<title<<endl;
                        file<<"| PLatform : "<<platform<<endl;
                        file<<"| Views    : "<<views<<endl;
                        file<<"| Status   : "<<status<<endl;

                        cout<<"Data Inserted in file Successfully"<<endl;
                    }
                    break;
                }

                case 2:
                {
                    cout<<"|-------------------------------------|"<<endl;
                    cout<<"|    Logging You Out! Visit Again     |"<<endl;
                    cout<<"|-------------------------------------|"<<endl;
                }
            }
            if(choice == 2)
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

