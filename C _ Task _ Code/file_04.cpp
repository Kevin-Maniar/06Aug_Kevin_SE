#include<stdio.h>
int main()
{
	FILE *ob;
	ob=fopen("data.txt","a");
	int id,n,i;
	char name[10];
	
	printf("Enter Number of Students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Your ID & Name:");
		scanf("%d%s",&id,name);
	
		fprintf(ob,"%d\n",id);
		fprintf(ob,"%s\n",name);
		fprintf(ob,"\n---------------\n");	
	}	

	return 0;
}
