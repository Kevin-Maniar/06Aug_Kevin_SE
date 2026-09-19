// string function 
// strcpy()


#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	char newstr[10];
	printf("EENTER ANY STRING\n");
	scanf("%s",str);
	printf("Original String:%s\n",str);
	
	printf("Copied String:%s\n",strcpy(newstr,str));
}
