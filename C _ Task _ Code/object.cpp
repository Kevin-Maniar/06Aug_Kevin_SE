// Structure 

#include<stdio.h>

struct studinfo
{
	int id;
	char name[10];
		
}
 details,details2; // object of structure 
int main()
{	
	printf("ID-->\n");
	scanf("%d",&details.id);
	printf("Name-->\n");
	scanf("%s",&details.name);
	
	printf("Name-->%s",details.name);
	printf("ID-->%d",details.id);
	
	printf("-__-");
	printf("ID-->\n");
	scanf("%d",&details2.id);
	printf("Name-->\n");
	scanf("%s",&details2.name);
	
	printf("Name-->%s",details2.name);
	printf("ID-->%d",details2.id);
} 
