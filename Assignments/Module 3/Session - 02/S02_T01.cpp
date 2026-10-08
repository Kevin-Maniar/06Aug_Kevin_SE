/* 
    Create a class called Playlist with properties: 
    name (string), createdOn (date), and isPublic (boolean). 
    Instantiate an object of Playlist and print all its properties.
*/

#include<iostream>
#include<string>
using namespace std;

class PlayList
{
    string name = "S u k o o n";
    string date = "21 - 09 - 2026";
    bool isPublic = true;
    
    public:
    void show()
    {
        cout<<"-----------------------------"<<endl;
        cout<<"PlayList Name: "<<name<<endl;
        cout<<"Created on: "<<date<<endl;

        if (isPublic)
            cout<<"Playlist is public"<<endl;
        else 
            cout<<"Playlist is private"<<endl;
        cout<<"-----------------------------"<<endl;
    }
};

int main()
{
    PlayList song;
    song.show();
}