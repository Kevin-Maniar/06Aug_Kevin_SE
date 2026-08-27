/*Create a simple JavaScript function called 
calculateTotal that takes two numbers: 
itemPrice and quantity, and returns the 
total bill amount using arithmetic operators.*/
#include<stdio.h>
int main()
{

	
	float itemPrice;
	int Quantity;
	float Cal_Total;
	
	printf("Enter Item Price:");
	scanf("%f",&itemPrice);
	printf("Enter Quantity:");
	scanf("%d",&Quantity);
	
	Cal_Total = itemPrice * Quantity;
	printf("Total Bill Amount is: %.2f INR",Cal_Total);
	
	return 0;
}
