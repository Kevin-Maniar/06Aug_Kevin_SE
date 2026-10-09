/* 
    Demonstrate multilevel inheritance by creating a 
    class GamingYouTuber 
    that inherits from YouTuber and adds a method 
    streamGame(gameName) 
    which prints '[username] is now streaming [gameName] on [channelName]'.
*/

#include<iostream>
using namespace std;

class SocialMediaUSer
{
    protected:
    string _username;
    int _followers;

    public:
    SocialMediaUSer(string _un , int _uf)
    {
        _username = _un;
        _followers = _uf;
    }
    void displayProfile()
    {
        cout<<"Username:-"<<_username<<endl;
        cout<<"Followers:-"<<_followers<<endl;
    }
};

class YouTube : public SocialMediaUSer
{
    protected:
    string _channelName;

    public:

    YouTube(string _un, int _uf, string cName) : SocialMediaUSer(_un, _uf)
    {
        _channelName = cName;
    }
    void upload(string vid)
    {
        cout<<"Video '"<<vid<<"' Uploaded to YouTube Channel "<<_channelName<<endl;
    }
};

class gaming_YouTuber : public YouTube
{

    public:
    gaming_YouTuber(string _un, int _uf, string cName) : YouTube(_un,_uf,cName)
    {
        //
    }
    void stream_game(string game_name)
    {
        cout<<_username<<" is now streaming "<<game_name<<" on "<<_channelName<<"Youtube Channel"<<endl;
    }
};
int main()
{
    gaming_YouTuber ob("Hello.exe",2500,"AnyIdea");
    ob.stream_game("Chess");
    return 0;
}