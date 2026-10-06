#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	printf("Enter Your String:__");
	gets(str);
	//scanf("%s",str);
	
	
	int n = strlen(str);
	
	printf("String is --> %s\n\n",str);
	printf("Length is --> %d\n",n);
}


// str length 


