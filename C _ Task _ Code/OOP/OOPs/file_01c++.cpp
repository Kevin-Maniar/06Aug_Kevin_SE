#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
    ofstream ob("oop.txt",ios::app);  //ofstream for creating file
    // cout<<"File is created";

    // ob<<"Hello C++"; // file write statically

    // dynamically

    int id;
    string name;

    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter Name:";
    cin>>name;

    ob<<"Id:-"<<id<<endl;
    ob<<"Name:-"<<name<<endl;

    return 0;
}