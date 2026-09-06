#include<stdio.h>
#include<string.h>
int main()
{
	char food[20];
	int quantity;
	float price;
	float total_bill;
	float net_bill;
	int choice , choice2;
	
	char  order_summary[1000] ="";
	char  line[50];
	
	printf("Press 1 for giving order\n");
	scanf("%d",&choice);
	while(1)
	{
			switch (choice)
			
			{
				store:
				case 1:
				printf("--Food Menu--\n");
				printf("enter food name:-");
				scanf("%s",food);
				
				printf("How many Quantity:-");
				scanf("%d",&quantity);
				
				printf("Enter Price:-");
				scanf("%f",&price);
				
				total_bill = price*quantity;				
				net_bill = net_bill + total_bill;

				sprintf(line,"%-15s Qty:%-5d Price:%-8.2f\n", food, quantity, price);
                strcat(order_summary, line);
				
				printf("Do u want more?\n");
				printf("For Yes press 1\n");
				printf("For No press 2\n");
				scanf("%d",&choice2);				

				switch(choice2)
				{
					case 1:
						{
							goto store;
						}
						case 2:
						{
							//net_bill = net_bill + total_bill;
							printf("-----> Order Summary <-----\n");
							printf("%s",order_summary);
							printf("\n");
							printf("Your Net Bill is ---->%.2f$\n",net_bill);							
						}
				}		
			}
		return 0;
	}
}
