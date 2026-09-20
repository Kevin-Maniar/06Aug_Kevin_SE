	/* Given three variables: likes, comments, and shares (all numbers), 
	write code to check if a post is 'trending' on 
	Instagram (at least 1000 likes OR more than 
	200 comments AND at least 50 shares). 
	Print the result. */

#include<stdio.h>
main ()
{
	int likes,comments,share;
	printf("Enter Total Number of Likes:");
	scanf("%d",&likes);
	printf("Enter Total Number of Comments:");
	scanf("%d",&comments);
	printf("Enter Total Number Share:");
	scanf("%d",&share);
	printf("-----------\n");
	printf("Liked By %d Fan \ncommented %d Fan \nShare By %d Fan\n",likes,comments,share);
	
	if(likes>=1000 || comments>200 && share>=50)
	{
		printf("-----------\n");
		printf("Result: Your Post is Trending! Congratulations");
	}
	else
	{
		printf("-----------\n");
		printf("Result: Your post is not Trending!!!");
	}		
}
