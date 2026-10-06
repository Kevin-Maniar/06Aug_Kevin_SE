#include<stdio.h>
int main()
{
	FILE *ob;
	ob=fopen("data.txt","w");
	
	int id;
	char name[10];
	
	printf("Enter Your ID & Name:");
	scanf("%d%s",&id,name);
	
	fprintf(ob,"%d\n",id);
	fprintf(ob,"%s\n",name);
	return 0;
}
