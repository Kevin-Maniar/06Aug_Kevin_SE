/* 
    Build a YouTuber class that inherits from SocialMediaUser and 
    adds a property channelName and a method uploadVideo(title) 
    that prints 'Video [title] uploaded to [channelName]'.
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
int main()
{
    YouTube yt("Hello.exe",1000,"Any Code");
    yt.displayProfile();
    yt.upload("Code with me");
    return 0;
}