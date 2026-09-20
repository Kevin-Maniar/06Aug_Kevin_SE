/*
Create a pattern that prints a pyramid of stars (*) with 6 rows, 
centered like the loading animation you see on BookMyShow when a page is loading.
Hint: Use spaces to align the stars in the center for each row.
*/



#include<stdio.h>
int main()
{
	int i,j,k;
	int n=6;
	
	for (i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
				printf(" ");	
		}
			for(k=1;k<=i;k++)
			{
				printf("* ");
			}
		printf("\n");
	}
	return 0;
}
