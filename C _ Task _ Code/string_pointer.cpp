#include<stdio.h>
int main()
{
	int i;
	char name[10];
	char name2[20];
	
	scanf("%s",name);
	scanf("%s",name2);
	
	for(i=0;i<2;i++)
	{
		printf("Address of the string is : %d\n\n",&name);
		printf("Address of the string is : %d\n\n",&name2);
	}
}
