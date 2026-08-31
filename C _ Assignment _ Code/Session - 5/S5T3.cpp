/*
	Create a Flipkart discount calculator that asks the user for the total cart amount. 
	Use nested if statements to check: 
	if amount > 2000, apply 20% discount; 
	else if amount > 1000, apply 10% discount; 
	else, no discount. Print the final amount to pay.
	Hint: Use nested ifs to check each discount slab.
*/
#include<stdio.h>
int main()
{
	float cart_amount;
	float final_price;
	printf("Enter the total cart amount:-");
	scanf("%f",&cart_amount);
	
	if(cart_amount>2000)
	{
		final_price = cart_amount*0.80;
		printf("You got 20%% Discount\n");
		printf("Your Final Amount is: %.2f\n",final_price);
	}
	else
	{
		if(cart_amount>1000)
		{
			final_price = cart_amount*0.90;
			printf("You got 10%% Discount\n");
			printf("Your Final Amount is: %.2f",final_price);
		}
		else{
			printf("No Discount\n");
			printf("Your Final Amount is: %2.f",cart_amount);
		}
	}
	return 0;
}
