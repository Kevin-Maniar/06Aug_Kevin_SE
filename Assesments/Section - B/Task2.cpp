/*
    Build a program that records a student's daily study hours for 7 days, stores them in an array,
    and generates a performance summary.

    1. Use a for loop to accept 7 float values (one per day) and store them in a float array.
    2. Calculate and print the weekly total, daily average, and the day number with the highest study
       hours.
    3. Print a simple visual bar for each day: the day number followed by one asterisk (*) per hour
       studied, truncated to the nearest integer (e.g., Day 3: ***).
    4. Reject and re-prompt for any day entry that is negative or greater than 24, before storing it in
       the array.
*/

#include<stdio.h>

struct study_hours
{
   float std_time;
} ob[10];

int main()
{
   int i;
   float total_std_time = 0.0f;
   float avg_std_time;


   for(i=0;i<7;i++)
   {
      do{
         printf("\nEnter your day %d study time:-",i+1);  
         scanf("%f",&ob[i].std_time);   

         if(ob[i].std_time <0 || ob[i].std_time>24)
         {
            printf("Invalid entry try again");
         }
      } while (ob[i].std_time < 0 || ob[i].std_time >24); 
   }

   for(i=0;i<7;i++)
   {
      total_std_time += ob[i].std_time;
   }

   avg_std_time = total_std_time/7;
   printf("\nTotal study time: %.1f Hours",total_std_time);
   printf("\nAverage study time: %.1f Hours",avg_std_time);
   
   int max = 0;
   float max_std_hour = ob[0].std_time;

   for(i=1;i<7;i++)
   {
      if(ob[i].std_time > max_std_hour)
      {
         max_std_hour= ob[i].std_time;
         max = i;  
      }
   }
   printf("\n\nHighest study hour day: Day%d %.1f hours",max + 1,max_std_hour);



   printf("\n-------------------\n");
   printf("    Visual Study Bar   ");
   printf("\n-------------------\n");

   for(i=0;i<7;i++)
   {
      printf("\nDay %d: ",i+1);
      int hour = (int)(ob[i].std_time);

      for(int j=0;j<hour;j++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}