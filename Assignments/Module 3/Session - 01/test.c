/* #include<stdio.h>

int main()
{
    char str[100];

    printf("Enter Any String Value :-");
    gets(str);

    printf("\nYour Entered String VAlue is :_ %s\n",str);

    for(int i=0;i<100;i++)
    {
            printf("STR [%d] - %c\n",i+1,str[i]);
    }
    return 0;
} */
/* 
#include<stdio.h>

int main()
{
    int str[10];

    for(int i=0;i<10;i++)
    {
        printf("Enter Any String Value :-");
        scanf("%d",&str[i]);
    }
    printf("\nYour Entered String VAlue is :_ %d\n",str);

    for(int i=0;i<10;i++)
    {
            printf("STR [%d] - %d \n",i+1,str[i]);
    }
    return 0;
} */



#include<stdio.h>

int main()
{   
    int i;
    char str[5][50] = {"Apple","Mango"};

    for(i=0;i<2;i++)
    {
        printf("STR [%d] :- %s\n",i+1,str[i]);
    }
    
    for(i=0;i<2;i++)
    {
        printf("STR [%d] :- %s\n",i+1,str[i]);
        for(int j=0;j<2;j++)
        {
           printf("STR [%d] :- %s\n",j+1,str[i][j]); 
        }
    }


    printf("STR");
    return 0;
}