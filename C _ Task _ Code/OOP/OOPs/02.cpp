#include<iostream>
using namespace std;
class stud
{
    int id;
    string name;

    public:
    void get_data()
    {
        cout<<"Enter ID:-"; cin>>id;
        cout<<"Enter Name:-";
        cin>>name;
    }

    void show_data()
    {
        cout<<"ID:-"<<id<<endl;
        cout<<"Name:-"<<name<<endl;
    }
} ob;
int main()
{
    // stud st;
    ob.get_data();
    ob.show_data();
    return 0;
}