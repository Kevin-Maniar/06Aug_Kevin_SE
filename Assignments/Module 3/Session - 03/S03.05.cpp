/* 
    Modify your Playlist class so that it auto-saves the playlist name to a 
    file called autosave.txt when the object is destroyed, 
    simulating an auto-save feature like Spotify.
    Hint: 
    Write the file-saving code inside the destructor.</em>
*/

// File concept pending will do later .....

#include<iostream>
#include<fstream>
using namespace std;

class playList  
{
    private:
    string PL_NAME;

    public:
    playList()
    {
        PL_NAME = "S U K O O N";
        cout<<"My playList:-"<<PL_NAME<<endl;
    }
    
    ~playList()
    {
        ofstream file("autosave.txt"); // file created 
        file<<"My playList Name:-"<<PL_NAME<<endl;
    }
};
int main()
{
    playList pl;
    return 0;
}