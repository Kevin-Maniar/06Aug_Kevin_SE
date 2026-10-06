#include<stdio.h>
#include<string.h>
int main()
{
	char fn[10],ln[10];	
	printf("Enter Your Frist Name:");
	scanf("%s",fn);
	printf("Enter Your Last Name:");
	scanf("%s",ln);
	printf("FullName : _%s",strcat(fn,ln));
}
