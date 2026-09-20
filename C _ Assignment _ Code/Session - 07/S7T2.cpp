/*
Build a right-angled triangle pattern 
using nested loops, where each row displays 
increasing numbers starting from 1, 
similar to how a leaderboard on a gaming app shows rank numbers.
*/

#include<stdio.h>
int main()
{
	int i,j,k;
	int n=5;
	
	for (i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
				printf(" ");	
		}
			for(k=1;k<=i;k++)
			{
				printf("* ",k);
			}
		printf("\n");
	}
	return 0;
}
