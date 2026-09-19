// string comparision

//strcmp()
//strcmpi()

#include<stdio.h>
#include<string.h>

int main()
{
	char pass[10],cpass[10];
	printf("Enter Your pass\n");
	scanf("%s",pass);
	printf("Enter Your Confirm Pass\n");
	scanf("%s",cpass);
	
	if(strcmpi(pass,cpass)==0)
	{
		printf("True");
	}
	else
	{
		printf("Error");
	}	
}
