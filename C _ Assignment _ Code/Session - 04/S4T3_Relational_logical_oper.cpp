	/*Write a function isEligibleForOffer 
	that takes a user's age and total order value, 
	and returns true if the user is 18 or older AND 
	the order value is above 500, 
	otherwise false.*/

#include<stdio.h>

bool isEligibleForOffer (int age,float order_value)
{
	if(age>=18  && order_value>500)
	{
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	int age;float order_value;
	printf("Enter Your Age:-");
	scanf("%d",&age);
	
	printf("Enter Your Total Order Value:-");
	scanf("%f",&order_value);
	
	if(isEligibleForOffer(age,order_value))
	{
		printf("YOU ARE ELIGIBLE FOR OFFER");
	}
	else{
		printf("YOU ARE NOT ELIGIBLE FOR OFFER!");
	}
	return 0;
}
