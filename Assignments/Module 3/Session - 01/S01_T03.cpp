/* 
    Create a Task class in your favorite OOP language (Java, Python, or C++) 
    with properties: 
    title and isDone. 
    Add a method markDone() that sets isDone to true, 
    and a method display() that 
    prints the task with its status.
*/

#include<iostream>
using namespace std;

class task
{
    string title = "Pay Gas Bill";
    bool isDone = false;

    public:
    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        if(isDone)
        {
            cout <<"Task:- "<<title<<" | Status :- Done"<<endl;
        }
        else
        {
            cout <<"Task:- "<<title<<" | Status :- Pending"<<endl;
        }
    }


};
int main()
{
    task ob;
    ob.display();
    ob.markDone();
    ob.display();
    return 0;
}