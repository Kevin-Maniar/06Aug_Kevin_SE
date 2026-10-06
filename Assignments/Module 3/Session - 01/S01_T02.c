/* 
    Modify your tasklist_c.c to add a function 
    markTaskDone(int index) that sets the 
    selected task to 'DONE' in the array, 
    then print the updated list.
    
    Hint:
    Use a separate status array or append ' - DONE' to the task string.
*/

#include<stdio.h>
#include<string.h>

char tasks [5][100];
char status[5][8];
int n;

void add_tasks()
{

    printf("How many tasks do you want to add?:-");
    scanf("%d",&n);
    // getchar();

    if(n>0 && n<6)
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter Task %d:-",i+1);
            gets(tasks[i]);
        }
    }
    else
    {
        printf("Error You can store only 5 tasks");
    }
}

void markTaskDone(int index)
{
    strcpy(status[index],"DONE");
}

void print_task()
{
    for(int i=0;i<n;i++)
    {            
        printf("\nTask[%d] --> %s status[%s]",i+1,tasks[i],status[i]);
    }
}


int main()
{
    add_tasks();
    markTaskDone(1);
    print_task();
}