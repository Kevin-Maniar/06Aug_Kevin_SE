#include<iostream>
using namespace std;

class stud
{
    int id;
    string name;

    public:
    void get_data()
    {
        id=101;
        name = "Kevin Mania";
        cout<<"ID:-"<<id<<endl;
        cout<<"Name:-"<<name<<endl;
    }
};

int main()
{
    stud st;
    st.get_data();
    return 0;
}