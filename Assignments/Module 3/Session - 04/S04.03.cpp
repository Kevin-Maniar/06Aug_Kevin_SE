/* 
    Create a Podcast-er class that also inherits from 
    SocialMediaUser and adds a property 
    podcastName and a method publishEpisode(episodeTitle) 
    that prints 'Episode [episodeTitle] published on [podcastName]'.
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

class podCaster : public YouTube
{
    protected:
    string _pdName;

    public:
    podCaster(string _un , int _uf,string cName,string epName) : YouTube(_un,_uf,cName)
    {
        _pdName = epName;
    }

    void publish(string date)
    {
        cout<<"Episode '"<<_pdName<<"' Published on "<<date<<endl;
    }
};


int main()
{
    podCaster pd("Hello.exe",2500,"AnyIdea","How to master coding?");
    pd.displayProfile();
    pd.publish("09/10/2026");
    pd.upload("Tutorial on Claude");
    return 0;
}