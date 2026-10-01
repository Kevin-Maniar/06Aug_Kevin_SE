/* 
    Write a simple C program tasklist_c.c 
    that allows you to add up to 5 tasks (as strings) to a 
    global array and print all tasks using a for loop. 
*/

#include<stdio.h>


int main()
{
    char tasks[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Task:%d >>> \n",i+1);
        scanf(" %c",&tasks[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Task No %d >>> %c\n",i+1,tasks[i]);
    }

    printf("Char [0] >>> %c\n",tasks[0]);
    printf("Char [1] >>> %c\n",tasks[1]);
    printf("Char [2] >>> %c\n",tasks[2]);
    printf("Char [3] >>> %c\n",tasks[3]);
    printf("Char [4] >>> %c\n",tasks[4]);
    printf("Char [5] >>> %c\n",tasks[5]);
    return 0;
}