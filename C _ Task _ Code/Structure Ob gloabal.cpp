// Structure 

#include<stdio.h>

struct studinfo
{
	int id;
	char name[10];
		
}
 details; // object of structure 
int main()
{	
	printf("ID-->\n");
	scanf("%d",&details.id);
	printf("Name-->\n");
	scanf("%s",&details.name);
	
	printf("Name-->%s",details.name);
	printf("ID-->%d",details.id);

} 
