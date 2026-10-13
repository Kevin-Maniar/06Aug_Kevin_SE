/* 
    Implement a function to read all content items from content_list.txt and display them in a numbered list, showing title and platform for each.
 */

#include<iostream>
#include<fstream>
using namespace std;

class content
{
    public:
    void menu()
    {
        cout<<"|============ Console Menu ==========|"<<endl;
        cout<<"| Press 1 for Add new content ideas  |"<<endl;
        cout<<"| Press 2 for view your content ideas| "<<endl;
        cout<<"| Press 3 for save entry in file     |"<<endl;
        cout<<"| Press 4 for log out                |"<<endl;
        cout<<"|============ ************ ==========|"<<endl;
    }

    private:
    int choice;
    string  title,platform, status;
    int views;

    public:
    void CHOICE()
    {
        while(1)
        {
        cout<<"What is your choice? --->";
        cin>>choice;
        cout<<"-------------------------"<<endl;
        
        switch(choice)
        {

            case 1:
            {
                cout<<"What's Your Title? ---> ";
                cin>>title;
                
                cout<<"What's Your Platform? ---> ";
                cin>>platform;
                
                cout<<"How many views? ---> ";
                cin>>views;
                
                cout<<"What's Your Status? ---> ";
                cin>>status;

                cout<<"-------------------------"<<endl;

                break;
            }

            case 2:
            {
                cout<<"Title:-"<<title<<endl;
                cout<<"Platform:-"<<platform<<endl;
                cout<<"Views:-"<<views<<endl;
                cout<<"Status:-"<<status<<endl;
                cout<<"-------------------------"<<endl;

                break;
            }

            case 3:
            {
                ofstream file("Content_list.txt",ios::app);
                file<<"Title:-"<<title<<endl;
                file<<"Platform:-"<<platform<<endl;
                file<<"Views:-"<<views<<endl;
                file<<"Status:-"<<status<<endl;
                file<<"-------------------------"<<endl;
                break;
            }

            case 4:
            {
                cout<<"Exited! See You again"<<endl;
                // cout<<"-------------------------"<<endl;
                break;
            }

            default:
            {
                cout<<"INVALID CHOICE ! ERROR "<<choice<<endl;
                cout<<"-------------------------"<<endl;
                break;
            }
        }
            
        if(choice == 4)
        {
            break;
        }
        }
    }

    void read_data()
    {
        ifstream file("content_list.txt");
        string str;

        while(file>>str)
        {
            cout<<str<<endl;
        }
        
    }
};
int main()
{
    content c;
    c.menu();
    c.CHOICE();
    c.read_data();
    return 0;
}