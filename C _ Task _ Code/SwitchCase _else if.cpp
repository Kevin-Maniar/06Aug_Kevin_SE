#include<stdio.h>
int main ()
{
	int choice ;
	printf("============\n");
	printf("Enter You choice value in b/w 1 to 7\n");
	printf("============\n");
	
	scanf("%d",&choice);
	
	if (choice ==1)
	{
		printf("Today is Monday");
	}
	else if (choice ==2)
	{
		printf("Today is Tuesday");
		printf("\n________________");
	}
		else if (choice ==3)
	{
		printf("Today is Wednesday");
		printf("\n________________");
	}
		else if (choice ==4)
	{
		printf("Today is Thrusday");
		printf("\n________________");
	}
		else if (choice ==5)
	{
		printf("Today is Friday");
		printf("\n________________");
	}
		else if (choice ==6)
	{
		printf("Today is Saturday");
		printf("\n________________");
	}
		else if (choice ==7)
	{
		printf("Today is Sunday");
		printf("\n________________");
	}
	else{
		printf("INVALID CHOICE Please keep your choice in between 1 to 7");
		printf("\n______________________________________________________");
	}
	return 0;
}
