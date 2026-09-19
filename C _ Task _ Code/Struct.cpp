// Structure 

#include<stdio.h>

struct studinfo
{
	int id;
	char name[10];
		
};
int main()
{
	studinfo details; // object of structure	
	printf("ID-->");
	scanf("%d",&details.id);
	printf("Name-->");
	scanf("%s",&details.name);
	
	printf("ID-->%d",details.id);
	printf("Name:%s",details.name);
	
} 
