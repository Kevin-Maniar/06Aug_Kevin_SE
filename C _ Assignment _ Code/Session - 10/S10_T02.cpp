/*
	Take input for two usernames (as strings) 
	and compare them using strcmp(). 
	Display whether they are the same or different.
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char username_one[10];
	char username_two[10];
	
	printf("Enter Username 1:");
	scanf("%s",username_one);
	printf("\nEnter Username 2:");
	scanf("%s",username_two);
	
	if(strcmp(username_one,username_two)==0)
	{
		printf("\nBOTH USERNAME ARE SAME");
	}
	else
	{
		printf("\nBOTH USERNAME ARE DIFFERENT");
	}
	return 0;
}
