#include<stdio.h>
int main()
{
	float readings[30];
	int i;
	float total = 0;
	float avg; 
	for (i=1;i<=30;i++)
	{
		printf("Enter Rainfall Data Day %d:::--",i);
		scanf("%f",&readings[i]);
		total += readings[i];
	}
		avg = total/5;
		printf("Total:%.2f\n",total);
		printf("Average:%.2f\n",avg);
	for (i=1;i<=30;i++)
	{
		if(readings[i]>avg)
		{
			printf("Day %d %.2f mm (Above average)\n",i,readings[i]);
		}
	}

}
