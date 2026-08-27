#include<stdio.h>
// Macro that detects the type and returns a string
#define get_type(X)_Generic((X),
int: "int",
float: "float", 
double: "double", 
char: "char", 
char*: "string (char*)", 
default: "unknown type" )
int main ()
{
	char product_name[20];
	float price;
	double rating;
	
	printf("Enter Product Name:");
	scanf("%s",&product_name);
	printf("Enter Price:");
	scanf("%f",&price);
	printf("Enter rating:");
	scanf("%lf",&rating);
	
	printf("\n Product Name is: %s",product_name);
	printf("\n Price is: %.2f",price);
	printf("\n Rating is: %.1lf",rating);
	
	printf("\n Type of Product name is : %s ",get_type(product_name));
	
	return 0;
}



