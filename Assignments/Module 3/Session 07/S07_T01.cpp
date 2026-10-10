/* 
    Create a text file called my_fav_songs.txt and write the names of your 5 favorite songs into it using ofstream.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ob("my_fav_songs.txt",ios::app);
    cout<<"File is Created"<<endl;

    ob<<"Below is My favorite songs"<<endl;
    ob<<"----------------------------"<<endl;

    ob<<"1. “Like a Rolling Stone” by Bob Dylan (1965)"<<endl;
    ob<<"2. “Respect” by Aretha Franklin (1967)"<<endl;
    ob<<"3. “Billie Jean” by Michael Jackson (1982)"<<endl;

    cout<<"Data inserted in file successfully"<<endl;
} 