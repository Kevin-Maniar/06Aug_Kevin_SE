#include<stdio.h>

int main()
{
	FILE *ob;
	ob=fopen("data.txt","r");
	
	char str[100];
	
	fscanf(ob,"%s",&str); // file read 
	printf("%s",str);
	
}
