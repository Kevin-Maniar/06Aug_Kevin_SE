	/*	Write a code snippet that 
	demonstrates the difference between pre-increment 
	(++count) and post-increment (count++) 
	by logging the values before and after using both on a 
	followerCount variable. */
#include<stdio.h>
int main()
{
	int follower = 100;
	
	printf("Pre Increment Follower ---> %d\n",++follower);
	printf("Pre Increment Follower ---> %d\n",++follower);
	printf("Pre Increment Follower ---> %d\n",++follower);
	
	printf("Post Increment Follower ---> %d\n",follower++);
	printf("Post Increment Follower ---> %d\n",follower++);
	printf("Post Increment Follower ---> %d\n",follower++);
	
	/* follower++ takes 100 first and then add +1 
	++follower add +1 in exist follower number 
	
	pre increment give result by +1 and 
	post increment give result by using old value first and then +1*/
	return 0;
}
