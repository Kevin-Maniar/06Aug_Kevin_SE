/* 
    Create a Java class called PaymentProcessor with 
    two overloaded methods processPayment(): 
    one that takes only an amount, 
    and one that takes amount and a coupon code. 
    Print which version is called and the final amount in each case.
*/

#include<iostream>
using namespace std;

class paymentProcessor
{
    public:
    void process_Payment(int amt)
    {
        cout << "Amount is :-" << amt << endl;
        cout << "Version - 1 executed Successfully" << endl;
    }

    void process_Payment(int amt,int _cup_code)
    {
        cout <<"Amount:-" << amt << endl
        <<"coupon:-"<<_cup_code<<endl;
        cout << "Version - 2 executed Successfully" <<endl;
    }
};
int main()
{
    paymentProcessor ob;
    ob.process_Payment(50);
    cout << "-------------------" << endl;
    ob.process_Payment(10,23659283);
    return 0;
}