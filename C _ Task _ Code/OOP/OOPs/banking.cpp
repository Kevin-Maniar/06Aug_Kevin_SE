#include<iostream>
using namespace std;

class account 
{
    public:
    int acc_number;
    string username;
    string acc_type;

    void acc_open()
    {
        cout<< "Enter ur account number:-";
        cin>>acc_number;
        cout<< "Your Name:-";
        cin>>username;
        cout<< "Saving or Current:-";
        cin>>acc_type;
    }
};

class deposit : public account
{
    public:
    int amt = 0;
    void  add_money()
    {
        cout<<"Kindly Add Money:-";
        cin>>amt;
    }
};

class withdraw : public deposit
{
  
    public:
    int withdrawal_money = 1000;
    void out_money()
    {
        cout<<"Enter Money for withdraw:-";
        cin>>withdrawal_money;
    } 
    void width()
    {
        if (amt>2000)
        {  
            amt = withdrawal_money - amt;
        }
        else
        {
           cout<<"You do not have minimum balance for withdraw"<<endl; 
        }
    }
};

class statements : public withdraw
{
    public:
    void acc_state()
    {
        cout<<"-------- Account Summary ---------"<<endl;
        cout<<"Your Account Number"<<acc_number<<endl;
        cout<<"Account Holder Name:-"<<username<<endl;
        cout<<"Account Type:-"<<acc_type<<endl;
        cout<<"Available Balance:-"<<amt<<endl;
    }
};

int main()
{
    statements st;
    st.acc_open();
    st.add_money();
    st.out_money();
    st.width();
    st.acc_state();

    return 0;
}