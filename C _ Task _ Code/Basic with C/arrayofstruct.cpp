// Structure 

#include<stdio.h>

struct studinfo
{
	int id;
	char name[10];
		
}
 details[10]; // object of structure 
 int main()
{	
	int n;
	int i;
	printf("Enter Number of students:\n\n");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		printf("ID:");
		scanf("%d",&details[i].id);
		printf("\nName:\n");
		scanf("%s",&details[i].name);	
	}
		for(i=0;i<n;i++)
	{
		printf("ID:%d\n",details[i].id);
		printf("Name:%s\n",details[i].name);	
	}
} 
