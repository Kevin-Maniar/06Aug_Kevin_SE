/*
	Create a function addToCart that takes 
	a shopping cart array and a product name, 
	adds the product to the cart, and prints the updated cart. 		
	Demonstrate how passing the cart 
	array by reference allows changes 
	to persist outside the function.
	
	Hint:In languages like JavaScript, 
	arrays are passed by reference. 
	In C/C++, use pointers for reference behavior.

*/

#include<stdio.h>

int main()
{
	char cart[100];
	int i;
	for (i=0;i<=5;i++)
	{
		printf("Enter Products to enter in cart");
		scanf("%s",cart[i+1]);
		printf("Product List:%s",cart[i]);
	}
}

