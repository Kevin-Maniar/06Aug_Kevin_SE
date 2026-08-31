/*
	Build a Zomato-style food suggestion tool: 
	take the user's preferred meal time 
	('breakfast', 'lunch', 'dinner', or 'snack') 
	and use a switch-case statement to suggest a popular dish for that time. 
	If the input doesn't match any meal, 
	suggest 'Try some fruits!'.
*/

#include <stdio.h>
int main()
{
    int choice;
    printf("--- Food Suggestion Tool ---\n");
    printf("-----------------------------\n");
    printf("1..BreakFast\n2..Lunch\n3..Dinner\n4..Snack\n");
    printf("\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
    printf("\n");
    
    switch (choice)
    {
    	case 1:
    		printf("Oh! BreakFast Time\n");
    		printf("You can have\n");
    		printf("1...OatMeal\n");
    		printf("2...Eggs\n");
    		printf("3...Poha\n");
    		printf("4...Avocado\n");
    		printf("5...Toast\n");
    		printf("6...Milk\n");
    	break;
		case 2:
			printf("Oh! Lunch Time\n");
			printf("You can have\n");
    		printf("1...Roti With Dal\n");
    		printf("2...Punjabi Dish\n");
    		printf("3...Gujarati Thali\n");
    		printf("4...Paneer Sabji\n");
		break;
		case 3:
			printf("Oh! Dinner Time\n");
			printf("You can have\n");
			printf("1..Vegetable Khichadi\n");
			printf("2..Snadwitch\n");
			printf("3..Chhole Bhature\n");
			printf("4..Masala Dosa\n");
			printf("5..Idli\n");
		break;
		case 4:
			printf("Oh! Snack Time\n");
			printf("You can have\n");
			printf("1..Mixed Nuts & Almonds\n");
			printf("2..Roasted Makhna\n");
			printf("3..SoyaChunks\n");
			printf("4..Wafors\n");
			printf("5..Sev Mummra\n");
		break;
		default:
			printf("Have Some Fruits\n");
	}
    return 0;
}
