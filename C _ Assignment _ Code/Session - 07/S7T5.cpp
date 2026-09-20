/*
Modify your pyramid pattern code to accept the 
number of rows as user input, 
so the user can set the height of 
the pyramid before printing.
*/

#include <stdio.h>

int main() 
{
	int size ;
	printf("Enter the Size of Pyramid--->");
	scanf("%d",&size);
	
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ^ ");
        }
        
        printf("\n");
    }
    return 0;
}
