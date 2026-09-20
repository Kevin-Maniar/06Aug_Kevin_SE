/* 
Create a menu-driven console app that lets the user: 
1) View your favorite 3 IPL teams, 
2) Add a new team, 3) Exit. 
Use a while loop to keep showing the menu until the user chooses Exit.
Hint: Use input() (or Scanner in Java) to get the user's choice each time.
*/
#include<stdio.h>
int main()
{
	int choice;
	char team[15];
	while(1)
	{
	
	printf("--IPL Team Menu--\n");
	printf("-----------------\n");
	printf("1. View Your Fav IPL Teams\n");
	printf("2. Add a new team\n");
	printf("3. Exit\n");
	printf("-----------------\n");
	printf("Enter Your Choice:--");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
		
		//	printf("Your Favorite IPL Teams are as below\n");
			printf("CSK\n");
			printf("GT\n");
			printf("KKR\n");
			printf("\n");	
			break;
		case 2:
			printf("Enter Team to add-->");
			scanf("%s",team);
			printf("Your Fav team is %s",team);			
			break;
		case 3:
			printf("Exited");
			break;
				
	}
		return 0;
	}
}
