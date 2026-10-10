#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ob("oop.txt");

    string str;
    
    // ob>>str;

    while(getline(ob,str))

    cout<<str;
}