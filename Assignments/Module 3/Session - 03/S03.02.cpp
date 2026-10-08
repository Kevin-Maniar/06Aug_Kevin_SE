/* 
    Build a class Product for a Flipkart-style app with 
    a parameterized constructor that takes 
    productName, 
    price, and rating as arguments 
    and displays all details using a displayInfo() method.
*/

#include<iostream>
using namespace std;

class product
{
    string product_name;
    int product_price; 
    double product_rating;

    public:
    product(string _name,int _price,float _rating)
    {
        product_name = _name;
        product_price = _price;
        product_rating = _rating;
    }

     void displayInfo()
        {
            cout<<">-----------< Product Details >----------<"<<endl;
            cout<<"Product Name:-"<<product_name<<endl;
            cout<<"Product's Price:-"<<product_price<<endl;
            cout<<"Product Rating:-"<<product_rating<<endl;
        }
};
int main()
{
    product shop("Zeb Thunder",50,9.9);
    shop.displayInfo();
    return 0;
}
