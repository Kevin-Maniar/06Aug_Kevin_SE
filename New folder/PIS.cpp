/*
	Simple Product Inventory System 
	Task: Create a small inventory management program. 
		Requirements: 
		1. Accept details of 5 products.  
		2. Create a structure Product containing:  
 			Product ID  
 			Product Name  
 			Price  
 			Quantity  
		3. Store products in an array.  
		4. Create a function to calculate:  
			Total = Price × Quantity 
		5. Display all products with their total value.  
		6. Store product information in products.txt.  
		7. Read the products from the file and display them.
		
		Concepts: Array + Function + Structure + File Handling  
*/


#include<stdio.h>

//int price ;
//int quantity;
//int total = 0;
int n;

struct product
{
	int id;
	int price;
	int quantity;
	char itmes[10];
	
	

} ob[100];

int total_value()
{
	
}

int main()
{
	int i;
	
	printf("Enter Number of Stocks");
	scanf("%d",&n);

	
	for(i=0;i<n;i++)
	{
		printf("Enter the ID");
		scanf("%d",&ob[i].id);
		
		printf("Price:");
		scanf("%d",&ob[i].price);
		
		printf("Quanitity:");
		scanf("%d",&ob[i].quantity);
		
		printf("Product Name:");
		scanf("%s",&ob[i].itmes);
	}
	
	printf("\n-------------------------------\n");
		
	for(i=0;i<n;i++)
	{
		printf("Product ID:%d\n",ob[i].id);
		printf("Product Price:%d\n",ob[i].price);
		printf("Product Quanitity:%d\n",ob[i].quantity);
		printf("Product Name:%s\n",ob[i].itmes);
	}
	printf("\n-------------------------------\n");
	
	total_value();
	
	

	return 0;
}
