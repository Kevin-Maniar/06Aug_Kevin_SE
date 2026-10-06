#include<iostream>

using namespace std;
int main()
{
    int n;

    cout<<"Enter Number of ids:-";
    cin>>n;
    int id[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter an ID:";
        cin>>id[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<"ID["<<i<<"]:-"<<id[i]<<endl;
    }
} 