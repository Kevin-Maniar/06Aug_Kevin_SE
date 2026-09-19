#include<stdio.h>

int main()
{
	int i;
	char name[20]; // Buffer to hold just ONE name at a time
	
	for(i=0; i<3; i++)
	{
		// 1. Read the name
		printf("enter name %d\n\n", i+1);
		scanf("%s", name);
		
		// 2. Print it immediately before it gets overwritten in the next loop iteration
		printf("Name - %s\n", name);
		
		// 3. Print the memory address (Notice it will be exactly the same every loop 
		// because you are reusing the exact same 20-character space in memory)
		printf("Address = %p\n", (void*)name); 
		printf("\n -------------------\n");
	}
	
	return 0;
}
