/*
	Copy the string 'Flipkart' into another string 
	Make sure to declare enough space for the destination string.
	variable called shoppingApp using strcpy(), 
	then print the value of shoppingApp.
	Hint:
	Make sure to declare enough space for the destination string.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char Shopping_app[10];
	printf("Enter Your String:__");
	scanf("%s",str1);
	printf("Your Entered String: %s\n",str1);
	printf("Shopping App:%s\n",strcpy(Shopping_app,str1));
	return 0;
}
