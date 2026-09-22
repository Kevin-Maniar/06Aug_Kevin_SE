/*
	Build a function formatPrice that takes a price 
	in rupees and returns a string formatted like Flipkart's price tag 
	(e.g., '?1,599'). 
	Use this function to display prices for three different products.
*/

#include<stdio.h>

int formatprice(int price,char result[30])
{
	printf("Price:%d\n",price);
	sprintf(result,"$%d",price);
}
int main()
{
	int price;
	char result[20];
	
	printf("Enter Price:");
	scanf("%d",&price);
	
	formatprice(price,result);
	
	printf("Price: %s",result);
	return 0;
}
