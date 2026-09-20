/*
	Write a program that takes a user's age and checks eligibility
	for three things using if-else statements: 
	if age >= 18, print 'Eligible for Driving License'; 
	if age >= 21, also print 'Eligible for Credit Card'; 
	if age >= 25, also print 'Eligible for Car Rental'. 
	Print all applicable messages for the given age.
*/
#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age:_");
	scanf("%d",&age);

	if (age >=18 and age <21)
	{
		printf("Eligible For Driving Licence\n");
	}
	else if (age >=21 and age <25)
	{
		printf("Eligible For Driving Licence\n");
		printf("Eligible For Credit Card\n");
    }	
    else if (age >=25 and age <100)
    {
    	printf("Eligible For Driving Licence\n");
		printf("Eligible For Credit Card\n");
		printf("Eligible For Car Rental");
	}
	else{
		printf("Not Eligible");
	}
	return 0;
}
