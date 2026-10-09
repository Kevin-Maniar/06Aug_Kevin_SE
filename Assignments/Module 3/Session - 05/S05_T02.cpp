/* 
    Build two classes, 
    InstagramUploader and YouTubeUploader, 
    each with a method uploadContent(). 
    Both should extend a base class SocialMediaUploader and override uploadContent() 
    to print a message showing how uploading works differently for Instagram and YouTube.
*/

#include<iostream>
using namespace std;

class SocialMediaUploader
{
    public:
    void uploadContent()
    {
        cout<<"Uploading Content on generic social media platform";
    }
};

class instagramUploader : public SocialMediaUploader
{
    public:
    void uploadContent()
    {
        cout<<"Instagram Creator"<<endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
    public:
    void uploadContent()
    {
        cout<<"YouTube Creator"<<endl;
    }  
};

int main()
{
    instagramUploader ig;
    YouTubeUploader yt;
    ig.uploadContent();
    yt.uploadContent();

    return 0;
}