#include<iostream>

using namespace std;

/* void  myfunc()
{
    cout<<"This is user defined function";
} */

/* void sum()
{
    int a,b;

    cout<<"ENter A and b"<<endl;
    cin>>a>>b;
    cout<<"A + B = "<<a+b;
} */

void sum(int a , int b)
{
    cout<<"A + B = "<<a+b<<endl;
}

void sub(int a , int b)
{
    cout<<"A - B = "<<a-b<<endl;
}

void multi(int a , int b)
{
    cout<<"A * B = "<<a*b<<endl;
}
int main()
{
    // myfunc();
    // sum();

    // sum(2,2);
    // multi(2,2);
    // sub(2,2);

    int n1,n2;
    cout<<"Enter N1 And N2:-";
    cin>>n1>>n2;

    sum(n1,n2);
    multi(n1,n2);
    sub(n1,n2);
}