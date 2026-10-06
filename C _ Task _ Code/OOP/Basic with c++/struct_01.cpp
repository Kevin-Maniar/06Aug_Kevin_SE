#include<iostream>
using namespace std;

struct stdinfo
{
    int id;
    string name;
    string city;
} ob[5]; // object of struct

int main()
{
    int n,i;

    cout<<"Enter Number of stud:-";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter ID:-";
        cin>>ob[i].id;
        cout<<"Enter Name:-";
        cin>>ob[i].name;
        cout<<"Enter City:-";
        cin>>ob[i].city;

        cout<<"----------------------------------"<<endl;
    }

    for(i=0;i<n;i++)
    {
        cout<<"ID : "<<ob[i].id<<endl;
        cout<<"Name : "<<ob[i].name<<endl;
        cout<<"City : "<<ob[i].city<<endl;
        cout<<"----------------------------------"<<endl;
    }

}
