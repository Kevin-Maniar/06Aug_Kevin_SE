#include<stdio.h>
int main ()
{
	const float GST_RATE = 0.18; //Gst rate 18%
	float base_price ;
	
	printf("Enter Base price of food:");
	scanf("%f",&base_price);
	
	double gst = GST_RATE * base_price ;
	float final_price = base_price + gst;
	
	printf("final price is :%.2f",final_price);	
	return 0;
}

