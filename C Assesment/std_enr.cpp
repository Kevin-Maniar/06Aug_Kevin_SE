#include<iostream>
#include<fstream>
using namespace std;


class student
{
    private:
    int id;
    string name;
    long long mobile;
    string city;
    int choice;
    int n;

    public:    
    void menu()
    {
        cout<<"=========================================="<<endl;
        cout<<"Welcome to Student enrollment system"<<endl;
        cout<<"Press 1 for Enroll New student"<<endl;
        cout<<"Press 2 for Read"<<endl;
        cout<<"Press 3 for exit"<<endl;
        cout<<"=========================================="<<endl;
    }

    void ask_choice()
    {
        while(1)

        {
        cout<<"What's Your choice?:- ";
        cin>>choice;
        cout<<"=========================================="<<endl;

        switch(choice)
        {
            case 1:
            {
                cout<<"How many number of student do you want to add ?"<<endl;
                cin>>n;

                for (int i=0;i<n;i++)
                {
                cout<<"Enter ID of Student "<<i+1<<":-";
                cin>>id;

                cout<<"Enter Name of Student "<<i+1<<":-";
                cin>>name;

                cout<<"Enter Mobile Number of Student "<<i+1<<":-";
                cin>>mobile;

                cout<<"Enter city of Student "<<i+1<<":-";
                cin>>city;
                cout<<"=========================================="<<endl;
                            
                ofstream file ("Std_data.txt",ios::app);
                file<<"Student "<<i+1<<" Id :- "<<id<<endl;
                file<<"Student "<<i+1<<" Name:- "<<name<<endl;
                file<<"Student "<<i+1<<" Mobile:- "<<mobile<<endl;
                file<<"Student "<<i+1<<" City:- "<<city<<endl;
                file<<"=========================================="<<endl;
                }
                
                break;
            }
            case 2:
            {
                ifstream file("Std_data.txt");
                string str;

                while (getline(file,str))
                {
                    cout<<str<<endl;
                }
                break;
            }

            case 3:
            {
                cout<<"Exited"<<endl;
                break;
            }

            default :
            {
                cout<<"Error Invalid Choice?"<<endl;
                break;
            }
        }

        if(choice == 3)
        {
            break;
        }
    }
    }

};

int main()

{

    student s;
    s.menu();
    s.ask_choice();
    
    return 0;
}