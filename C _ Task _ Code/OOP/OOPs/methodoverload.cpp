#include<iostream>
using namespace std;

class stdinfo
{
    public:
    void get_data(int id)
    {
        cout<<"ID"<<id<<endl;
    }

    void get_data(string name )
    {
        cout<<"Name:"<<name<<endl;
    }
};

int main()
{
    stdinfo st;
    st.get_data(101);
    st.get_data("Kevin");

    return 0;
}