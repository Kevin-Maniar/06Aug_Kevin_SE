/* 
    Extend your Playlist class to include a member function 
    addSong(songTitle) that adds the song title to 
    an array property called songs. 
    
    Demonstrate by adding three song titles and 
    displaying the updated songs list.

    Hint:Initialize songs as an empty array inside the constructor.</em>
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

class songList
{
    // constructor i will do it later 
};

int main()
{
    PlayList song;
    song.show();
}