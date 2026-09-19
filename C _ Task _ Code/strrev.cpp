#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("Enter String:__");
	gets(str);
	
	printf("OG String:%s\n",str);
	printf("Rev String---.%s\n",strrev(str));
	printf("Rev String---.%s\n",strupr(str));	
}
