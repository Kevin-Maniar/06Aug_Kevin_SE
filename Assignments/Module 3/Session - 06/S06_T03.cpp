/*     
    Imagine a Flipkart-like app: 
    create an abstract class Product with an abstract method upload(). 
    Then, create two subclasses, 
    Electronics and Clothing, 
    that each implement the upload() method to print a different upload message.
*/

#include<iostream>
using namespace std;

class product
{
    public:
    virtual void upload()= 0;
};

class electro : public product
{
    public:
    void upload () override
    {
        cout<<"Electro Items uploaded successfully"<<endl;
    }
};

class cloth : public product
{
    public:
    void upload() override
    {
        cout<<"Clothing Items uploaded successfully"<<endl;
    }
};
int main()
{
    cloth c;
    c.upload();
    electro e;
    e.upload();
    return 0;
}