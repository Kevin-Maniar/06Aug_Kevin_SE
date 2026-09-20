/*
	Create a simple IPL Fan Bot that 
	takes your favorite IPL team name as input and 
	uses if-else-if statements 
	to print a unique cheer message for each team 
	(e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). 
	If the team is not recognized, print 'Team not found!' 
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char IPL_team[50]; 

    printf("Enter Your Fav IPL Team: ");
    scanf("%s", IPL_team);
	printf("Your Fav IPL Team is: %s\n", IPL_team);
    
    if (strcmp(IPL_team, "MI"	) == 0) {
        printf("Go Mumbai Indians!\n");
    } 
    else if (strcmp(IPL_team ,"GT") == 0) {
        printf("Aava De!\n");
    }
    else if (strcmp(IPL_team, "CSK") == 0) {
        printf("Chennai Super Kings for the win!\n");
    } 
    else if (strcmp(IPL_team, "RCB") == 0) {
        printf("Ee Sala Cup Namde! Go RCB!\n");
    } 
    else if (strcmp(IPL_team, "KKR") == 0) {
        printf("Korbo Lorbo Jeetbo Re! Go KKR!\n");
    } 
    else {
        printf("Team Not Found!\n");
    }
    return 0;
}

