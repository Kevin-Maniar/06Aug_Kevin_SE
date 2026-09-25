/*
    Build a console program that accepts a student's percentage score and prints their letter
    grade along with a short motivational message.
    1. Accept a float percentage value as user input using scanf().
    2. Assign a grade using if-else if: A (>= 90), B (>= 75), C (>= 60), D (>= 45), F (below 45).
    3. Print the assigned grade and a one-line message for each band (e.g., 'B — Good work! Keep
    pushing.').
    4. Handle invalid input: if the score is outside the range 0–100, print a clear error message and
    exit the program gracefully.
*/

#include<stdio.h>

struct grade
{
    float score;
} ob;

int main()
{
    printf("Enter Your Percentage:- ");
    scanf("%f", &ob.score);

    if(ob.score < 0 || ob.score > 100)
    {
    printf("Invalid i/p\n");
    }
    else
        {
        if(ob.score >= 90)
        {
            printf("Grade A\n");
        }
        else if(ob.score >= 75)
        {
            printf("Grade B\n");
        }
        else if(ob.score >= 60)
        {
            printf("Grade C\n");
        }
        else if(ob.score >= 45)
        {
            printf("Grade D\n");
        }
        else
        {
            printf("FAIL\n");
        }

        printf("Keep going! Every effort makes you better.\n");
}
    return 0;
}