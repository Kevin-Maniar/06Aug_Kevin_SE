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

#include <stdio.h>

void addToCart(char cart[10][50])
{
	printf("%s",cart[0]);
}
int main()
{
	char cart[10][50] = {"Apple","Banana","Kaju"};
	addToCart(cart);
}




