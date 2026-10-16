/* 
    Create a Content class with properties: title, platform, views, and status. Write a method to display all details of a Content object.
*/

#include<iostream>
using namespace std;

class content 
{
    string title,platform;
    int views;
    string status;

    public:
    content()
    {
        cout<<"Enter Title of Your Content:";
        getline(cin,title);
        
        cout<<"Enter Platform of Your Content:";
        getline(cin,platform);
        
        cout<<"Enter Views of Your Content:";
        cin>>views;
        getchar();
        cout<<"Enter Status of Your Content:";
        getline(cin,status);
    }
    public:
    void Show_Content()
    {
        cout<<"Title:-"<<title<<endl;
        cout<<"Platform:-"<<platform<<endl;
        cout<<"Views:-"<<views<<endl;
        cout<<"Status:-"<<status<<endl;
    }
}ob;
int main()
{
    ob.Show_Content();
    return 0;
}