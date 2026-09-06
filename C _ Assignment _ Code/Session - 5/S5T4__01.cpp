#include<stdio.h>
int main()
{
	int age;
	printf("Age:");
	scanf("%d",&age);
	
	if (age>=18)
		{
			printf("Lic\n");
	
	if(age>=21)
		{
			printf("credit\n");
		
	if(age>=25)
		{
			printf("Car\n");
		}
		}
		}
	else
	{
		printf("not Applicable");
	}
	return 0 ;
}