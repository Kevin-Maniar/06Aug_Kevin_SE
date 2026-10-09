/* 
    Implement hierarchical inheritance by creating an 
    InstagramInfluencer class that inherits from SocialMediaUser 
    and adds a method postStory(storyTitle) 
    which prints '[username] posted a new story: [storyTitle]'.
    
    Hint: Think about how SocialMediaUser is the parent for YouTuber, Podcast-er, and InstagramInfluencer.
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

class podCaster : public SocialMediaUSer
{
    protected:
    string _pdName;

    public:
    podCaster(string _un , int _uf) : SocialMediaUSer(_un,_uf)
    {
        // _pdName = epName;
    }

    void publish(string date)
    {
        cout<<"Episode '"<<_pdName<<"' Published on "<<date<<endl;
    }
};

class inst_influencer : public SocialMediaUSer
{
    public:
    inst_influencer(string _un , int _uf) : SocialMediaUSer(_un,_uf)
    {

    }
    void post_story(string _story)
    {
        cout<<_username<<" Posted a new story: "<<_story<<endl;
        //which prints '[username] posted a new story: [storyTitle]'.
    }
};
int main()
{
    inst_influencer ig("Top.exe",34);
    ig.post_story("Good Morning"); 
    return 0;
}