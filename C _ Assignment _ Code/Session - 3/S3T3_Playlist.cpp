/*Write a program that 
stores your favorite Spotify playlist's name (string), 
total number of songs (int), 
and average song duration in minutes (float). 
Print all values in a single formatted sentence.*/

#include<stdio.h>
int main()
{
	char playlist[10];
	int total_songs;
	float avg_song_duration;
	
	printf("Enter Your fav Spotify playlist's Name:");
	scanf("%s",&playlist);
	printf("total_songs are :");
	scanf("%d",&total_songs);
	printf("Avg Duration:");
	scanf("%f",&avg_song_duration);
	
	printf("Playlist Name: %s\n",playlist);
	printf("Total Songs : %d\n",total_songs);
	printf("Total Duration: %.0f Minutes\n",avg_song_duration);
	
	return 0;
	
}
