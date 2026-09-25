/* 
    Task 3: Student Record Manager
    Build a C program using structures and functions to store, display, and identify the top
    performer among a group of students.
    1.  Define a struct Student with fields: name (char[50]), roll-no (int), marks (float), and grade
        (char).
    2.  Write a function void assignGrade(struct Student *s) that sets the grade field based on the
        marks value using the same bands as Task 1.
    3.  In main(), accept data for 3 students, call assignGrade() for each, and display all records in a
        formatted table with column headers.
    4.  Write a separate function void printTopper(struct Student[], int n) that prints the name and
        marks of the student with the highest marks. 
*/

#include<stdio.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
    char grade;
} st[50];

void assignGrade(struct student *k)
{
    if(k->marks < 0 || k -> marks > 100)   
    {
        printf("Invalid Score");
        k->grade = '?';
        return;
    }

    if(k->marks>=90)
    {
        k->grade = 'A';
    }
    else if (k->marks>=75)
    {
        k->grade = 'B';
    }
    else if (k->marks>=60)
    {
        k->grade = 'C';
    }
     else if (k->marks>=45)
    {
        k->grade = 'D';
    }
     else 
    {
        k->grade = 'F';
    }    
}


int main()
{
    int i,n=3; 
    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll Number of student %d:-\n",i+1);
        scanf("%d",&st[i].roll_no);
        printf("\nEnter Name of student %d:-\n",i+1);
        scanf("%s",st[i].name);
        printf("Enter Marks of student %d:-\n",i+1);
        scanf("%f",&st[i].marks);

        assignGrade(&st[i]);
        printf("Grade:-%c",&st[i].grade);
    }

        printf("\n______________\n");
        printf("Student Details");
        printf("\n______________\n");

        
}