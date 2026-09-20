	/*
	Build a 'Guess the Song' game like Spotify — 
	the program randomly picks a song name from a list and asks the user to guess it. 
	Use a do-while loop so the user can keep guessing until they get it right.
	Constraint: Use at least 3 song names of your choice.
	*/
	
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<time.h>
	
	int main ()
	{
		char song1[50] = "Sunn";
		char song2[50] = "ShapeOfYou";
		char song3[50] = "Levitating";
		char guess[50];
		char random_pick[50];
		
		int choice;
		srand(time(0));
		choice = rand()%3 ;
		
		switch(choice)
		{
			case 0:
				strcpy(random_pick,song1);
				printf("Hint: Singer is Dino James\n");
				break;
			case 1:
				strcpy(random_pick,song2);
				printf("Hint: Singer is Ed Sheeran\n");
				break;
			case 2:
				strcpy(random_pick,song3);
				printf("Hint: Singer is Dua Lipa\n");
				break;
		}
		
		do{
			printf("Comm|on Try to  Guess The song: ");
			scanf("%s",&guess);
			
			if (strcmp(guess,random_pick)==0)
			{
				printf("Correct!!");
				break;
			}
			else
			{
				printf("Wrong Guess Try Again\n");
			}
		}	
		while(strcmp(guess,random_pick)!=0 );
		return 0;
	}
