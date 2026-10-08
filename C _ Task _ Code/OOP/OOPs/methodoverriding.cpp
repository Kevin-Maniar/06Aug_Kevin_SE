#include<iostream>
using namespace std;

class master
{
    public:
    void head(string pname)
    {
        cout<<"Header page"<<endl;
    }

    void footer(string pname)
    {
        cout<<"Footer page"<<endl;
    }
};

class home : public master
{
    public:
        void head(string pname)
    {
        cout<<"Header page"<<pname<<endl;
    }

    void footer(string pname)
    {
        cout<<"Footer page"<<pname<<endl;
    }
};

class about : public master
{
    public:
        void head(string pname)
    {
        cout<<"Header page:"<<pname<<endl;
    }

    void footer(string pname)
    {
        cout<<"Footer page:"<<pname<<endl;
    }
};

int main()
{

    home hm;
    about ab;

    hm.head("Home");
    hm.footer("Home");

    ab.head("about");
    ab.footer("about");
}