/*
	Declare a function called getUserInitials 
	that takes a user's full name (like 'Virat Kohli') 
	and returns their initials in uppercase (e.g., 'VK'). 
	Call this function with your favorite cricketer's name and print the result.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>


void getUSerInit()
{
	char name[100];
	int i;
	printf("Enter Your name:");
	gets(name);
	printf("\nYour Name:%c",toupper(name[0]));
	
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i] == ' ')
		{
			printf("%c",toupper(name[i+1]));
			
		}
	}
}

int main()
{		
	getUSerInit();
	return 0;
}



