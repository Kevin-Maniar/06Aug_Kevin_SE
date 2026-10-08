// default const
/* 
#include <iostream>
using namespace std;

class info
{
    public:
    info() // constructor 
    {
        cout<<"This is default constructor.";
    }
};

int main()
{
    info ob;
    return 0;
} */

// parameter 

#include <iostream>
using namespace std;

class info
{
    public:
    info(int id , string name) // constructor 
    {
        cout<<"This is default constructor."<<endl;
        cout<<"ID:-"<<id<<endl;
        cout<<"Name:-"<<name<<endl;
    }

    ~info() // destructor
    {
        cout<<"Memory is free"<<endl;
    }
};

int main()
{
    info ob(101,"Kevin");
    return 0;
} 