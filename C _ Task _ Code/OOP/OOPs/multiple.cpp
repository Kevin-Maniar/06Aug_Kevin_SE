#include<iostream>
using namespace std;

class kevin
{
    public:
    int k_id;
    string k_pro;

    void k_getData()
    {
        cout<<"Enter Kevin's ID:-";
        cin>>k_id;

        cout<<"Enter Program:-";
        cin>>k_pro;
    }
};

class alok
{
    public:
    int a_id;
    string a_pro;

    void a_getData()
    {
        cout<<"Enter Alok's ID:-";
        cin>>a_id;

        cout<<"Enter Program:-";
        cin>>a_pro;
    }
};

class tara
{
    public:
    int t_id;
    string t_pro;

    void t_getData()
    {
        cout<<"Enter Tara's ID:-";
        cin>>t_id;

        cout<<"Enter Program:-";
        cin>>t_pro;
    }
};

class tops : public kevin,public alok,public tara
{   
    public:
    void print()
    {
        cout<<"----------- Kevin's info -----------"<<endl;
        cout<<"Id of Kevin:-"<<k_id<<endl;
        cout<<"Program of Kevin:-"<<k_pro<<endl;

        cout<<"----------- Alok's info -----------"<<endl;
        cout<<"Id of Alok:-"<<a_id<<endl;
        cout<<"Program of ALok:-"<<a_pro<<endl;

        cout<<"----------- Tara's info -----------"<<endl;
        cout<<"Id of Tara:-"<<t_id<<endl;
        cout<<"Program of Tara:-"<<t_pro<<endl;
    }
};
int main()
{
    tops tp;
    tp.k_getData();
    tp.a_getData();
    tp.t_getData();
    tp.print();
    
    return 0;
}