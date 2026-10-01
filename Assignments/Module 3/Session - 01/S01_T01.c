/* 
    Write a simple C program tasklist_c.c that allows you to 
    add up to 5 tasks (as strings) to a global array 
    and print all tasks using a for loop.
*/

#include<stdio.h>

char tasks [5][100];
int n;

void add_tasks()
{

    printf("How many tasks do you want to add?:-");
    scanf("%d",&n);
    getchar();

    if(n>0 && n<6)
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter Task %d:-",i+1);
            fgets(tasks[i],100,stdin);
        }
    }
    else
    {
        printf("Error You can store only 5 tasks");
    }
}

void print_task()
{
    for(int i=0;i<n;i++)
    {            
        printf("Your pending task %d --> %s",i+1,tasks[i]);
    }
}
int main()
{
    add_tasks();
    printf("\n");
    print_task();
}