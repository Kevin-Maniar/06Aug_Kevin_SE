#include<stdio.h>

struct stdinfo
{
	int id;
	char name[20];
} ;  // st; obj of struct
int main()
{
	stdinfo st[5];
	
	int n,i;
	printf("Enter Number of Students:\n");
	scanf("%d",&n);
	printf("\n======\n");
	
	for(i=0;i<n;i++)
	
	{
		printf("enter your id :");
		scanf("%d",&st[i].id);		
		printf("enter your name :");
		scanf("%s",&st[i].name);	
	}
	
	for(i=0;i<n;i++)
	{
	printf("\n======\n");	
	printf("ID:%d \nName:%s\n",st[i].id,st[i].name);
	
	}
}
