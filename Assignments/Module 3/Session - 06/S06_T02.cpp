/* 
Build a class called Instagram_Story with a protected property storyViews. 
Create a subclass called SponsoredStory that can access and display the storyViews value.
*/

#include<iostream>
using namespace std;

class Instagram_story
{
    protected:
    int STORY_VIEWS;
};

class Sponsored_story : protected Instagram_story
{
    public:
    void access()
    {
        STORY_VIEWS = 3287;
        cout<<"Story Views:-"<<STORY_VIEWS<<endl;
    }
};
int main()
{
    Sponsored_story ob;
    ob.access();
    return 0;
}