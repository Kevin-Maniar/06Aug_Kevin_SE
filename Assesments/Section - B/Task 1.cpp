/*
Accept a float percentage value as user input using scanf().
Assign a grade using if-else if: A (>= 90), B (>= 75), C (>= 60), D (>= 45), F (below 45).
Print the assigned grade and a one-line message for each band (e.g., 'B — Good work! Keep
pushing.').
Handle invalid input: if the score is outside the range 0–100, print a clear error message and
exit the program gracefully.
*/

#include<stdio.h>
int main()
{
	float percentage;
	printf("Enter Your Score:");
	scanf("%f",&percentage);
	
	if(percentage >=90)
	{
		printf("Your Grade is A");
	}
	else if (percentage>=75)
	{
		printf("Your Grade is B");
	}
	else if (percentage>=60)
	{
		printf("C");
	}
	else if (percentage>=45)
	{
		printf("D");
	}
	else if (percentage <=40)
	{
		printf("F");
	}
	else{
		printf("Fail");
	}
	return 0;
}
