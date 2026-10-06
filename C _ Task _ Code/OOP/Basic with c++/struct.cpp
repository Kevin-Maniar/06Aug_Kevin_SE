#include<iostream>
#include<string.h>
using namespace std;

struct stdinfo
{
    int id;
    string name;
    string city;
} ob; // object of struct


int main()
{
    cout<<"Enter ID:-";
    cin>>ob.id;

    cout<<"Enter Name:-";
    getline(cin , ob.name);

    cout<<"Enter City:-";
    cin>>ob.city;
    cout<<"----------------"<<endl;
    cout<<"ID:-"<<ob.id<<endl;
    cout<<"Name:-"<<ob.name<<endl;
    cout<<"City:-"<<ob.city<<endl;
}