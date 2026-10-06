#include<stdio.h>

int main()
{
	int i,n;
	int roll_no[n];
	
	printf("Enter size of n:\n\n");
	scanf("%d",&n);
	
	
	
	for(i=0;i<n;i++)
	{
		printf("enter roll number:__\n\n");
		scanf("%d",&roll_no[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Elements of array :  %d\n\n",roll_no[i]);
	}
	
	return 0;
}
