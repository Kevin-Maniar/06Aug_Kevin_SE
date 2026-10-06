#include<stdio.h>

struct address

{
	char city[10];
	int pin_code;
		
};

struct myData
{
	int id;
	char name[10];
	
	struct address ad; // nested structure ad is object	
} my; //object of 2nd struct

int main()
{
	printf("Enter your id:\n");
	scanf("%d",&my.id);
	
	printf("Enter Your Name:\n");
	scanf("%s",&my.name);
	
	printf("Enter Your City:\n");
	scanf("%s",&my.ad.city);
	
	printf("Enter Your PinCode:\n");
	scanf("%d",&my.ad.pin_code);
	
	printf("\nID:%d\n",my.id);
	printf("\nName:%s\n",my.name);
	printf("\nCity:%s\n",my.ad.city);
	printf("\nPinCode:%d\n",my.ad.pin_code);
}
