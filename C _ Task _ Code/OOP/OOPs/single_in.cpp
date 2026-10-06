#include<iostream>
using namespace std;

class father
{
    public:
    int bal;
    int car;

    void get_data()
    {
        cout<<"Enter Balance:-";
        cin>>bal;
        cout<<"Enter Car:-";
        cin>>car;
    }
};

class son : public father
{

    public:
    void print_data()
    {
        cout<<"Balance:-"<<bal<<endl;
        cout<<"Car:-"<<car<<endl;
    }
};
int main()
{
    son sn;
    sn.get_data();
    sn.print_data();
    return 0;
}