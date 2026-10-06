#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter number of students:\n\n");
	scanf("%d",&n);
	
	int id [n];
	char name [n][20];
	
	for(i=0;i<n;i++)
	{
		printf("enter your id & name\n\n");
		scanf("%d %s",&id[i],name[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("ID - %d\n",id[i]);
		printf("Name - %s\n",name[i]);
	  	printf("\nAddress = [%d]=%d",i,&name[i] );
		printf("\n -------------------\n");
	}
	
	return 0;
}
