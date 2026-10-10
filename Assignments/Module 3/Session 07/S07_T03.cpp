/* 
    Modify your code to append a new song name entered by the user to my_fav_songs.txt without overwriting the existing list.
    Hint:Open the file in append mode using ofstream.</em>
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ob("my_fav_songs.txt",ios::app);
    cout<<"File is Created"<<endl;

    string fav_song;

    cout<<"Dear! What's your fav song?";
    getline(cin,fav_song);
    
    ob<<fav_song<<endl;
    cout<<"Data inserted in file successfully"<<endl;

    return 0;
} 