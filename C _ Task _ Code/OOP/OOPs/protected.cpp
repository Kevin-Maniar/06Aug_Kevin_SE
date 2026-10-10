#include<iostream>
using namespace std;

class bank 

{
    private:
    int pin;

    protected:
    int balance;

    public:
    string name;

    public:
    void GET_DATA()
    {
        name = "Kevin";
        cout<<"Name:-"<<name<<endl;
    }

};

class account : public bank
{
    public:
    void PRINT_DATA()
    {
        balance = 50000;
        cout<<"Balance:-"<<balance<<endl;
    }
};
int main()
{
    account acc;
    acc.GET_DATA();
    acc.PRINT_DATA();
}