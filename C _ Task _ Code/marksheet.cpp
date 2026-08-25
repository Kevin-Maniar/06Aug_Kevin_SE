#include<stdio.h>
main ()
{
	int html,java,python,sql,total_marks;
	float percentage;

	printf ("Enter the Marks of all subject");
	printf("\n Enter the marks of HTML : -");
	scanf("%d",&html);
	printf("\n Enter the marks of Java : -");
	scanf("%d",&java);
	printf("\n Enter the marks of Python : -");
	scanf("%d",&python);
	printf("\n Enter the marks of SQL : -");
	scanf("%d",&sql);
	
	printf("\nMarks of HTML :_ %d",html);
	printf("\nMarks of Java :_ %d",java);
	printf("\nMarks of Python :_ %d",python);
	printf("\nMarks of SQl :_ %d",sql);
	
	total_marks = html+java+python+sql;
	printf("\n Total marks is :-%d",total_marks);
//	percentage = (total_marks/4);
	percentage =  (total_marks/400.0)*100;
	printf("\n Your Percentage is : %.2f",percentage);
	
	if (percentage >=70)
	{
		printf("\nYour Grade is A+");
	}
	else if (percentage >=60)
	{
		printf("\nYour Grade is A");
	}
	else if (percentage >=50)
	{
		printf("\nYour Grade is B");
	}
	else if (percentage >=60)
	{
		printf("\nYour Grade is C");
	}
	else {
		printf("\nSorry ! You are Fail Better luck next time");
	}
}
