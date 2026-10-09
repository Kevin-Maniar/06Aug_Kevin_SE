/*   
    Create a base class called SocialMediaUser with properties username and followers, 
    and a method displayProfile() that prints the username and follower count.
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
int main()
{
    SocialMediaUSer ig("kevyns.exe",1000);
    ig.displayProfile();
    return 0;
}