#include<stdio.h>

int main()
{
	FILE *ob;
	ob=fopen("data.txt","r");
	
	char str[100];
	while(fscanf(ob,"%s",&str)!=EOF)
 {
 		printf("\t\t%s\n\n",str);
 }
}
