/*
	Declare a function called getUserInitials 
	that takes a user's full name (like 'Virat Kohli') 
	and returns their initials in uppercase (e.g., 'VK'). 
	Call this function with your favorite cricketer's name and print the result.
*/

#include<stdio.h>
#include<string.h>


void getUSerInit()
{
	char name[] = "VIRAT KOHLI";
	printf("\n\n");
	printf("YOUR NAME IS: %s\n\n",name);
	strupr(name);	
	printf("Upper Case Applied: %s\n\n",name);
	strlwr(name);
	printf("LowerCase Applied: %s\n\n",name);
}

int main()
{	
	
	getUSerInit();

	return 0;
}



