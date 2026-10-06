#include<iostream>
using namespace std;

class stud
{
    public:
    void get_data(int id,string name)
    {
        cout<<"ID: -"<<id<<endl;
        cout<<"Name: -"<<name<<endl;
    }
};

int main()
{
    stud st;
    int st_id;
    string st_nm;
    cout<<"Enter ID";
    cin>>st_id;
    cout<<"Enter Name:-"; cin>>st_nm;
    st.get_data(st_id,st_nm);
    return 0;
}