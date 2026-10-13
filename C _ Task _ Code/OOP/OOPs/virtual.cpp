#include<iostream>
using namespace std;

class bank
{

    public:
    virtual void interest()
    {
        cout<<"Bank Branch"<<endl;
    }
};

class sbi : public bank
{
    public:
    void interest()
    {
        cout<<"SBI Branch"<<endl;
    }
};

class bob : public bank 
{
    public:
    void interest()
    {
        cout<<"bob Branch";
    }
};
int main()
{
    bank *bn;
    sbi s;
    bob b;

    bn=&b;
    bn->b;
    return 0;
}