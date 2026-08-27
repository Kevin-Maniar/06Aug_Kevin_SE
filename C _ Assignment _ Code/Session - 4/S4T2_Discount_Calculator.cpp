#include<stdio.h>
int main()
{
	/*Build a Flipkart-style discount calculator: 
	given product price, 
	discount percentage, 
	and a boolean isMember, 
	use arithmetic and logical 
	operators to calculate the final price 
	(apply an extra 5% off if isMember is true). */
	
	float product_price, discount_percentage;
	float final_price, discount_price;
	int isMember;
	
	printf("Enter Product Price:");
	scanf("%f",&product_price);
	
	printf("Enter Discount Percentage:");
	scanf("%f",&discount_percentage);
	
	printf("Are You Member: (1 for Yes , 0 for NO)");
	scanf("%d",&isMember);
	
	// Count Normal price
	 discount_price = product_price * (discount_percentage/100);
	//Price After Discount
	final_price = product_price - discount_price;
	//Extra 5% discount
	
	if (isMember == 1)
	{
		final_price = final_price -(final_price *5/100);
		printf("Your Final price is :%.2f",final_price);
	}
	else
	{
		printf("Final Price = %.2f$",final_price);
	}
	 
}
