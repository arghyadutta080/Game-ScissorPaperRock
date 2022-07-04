#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h> 

int main () {
    
    printf("Welcome to the game...\n\nSCISSOR PAPER ROCK\n\nPress 5 to continue... ");

    int x;
    scanf("%d", &x);

    if (x==5)
    {

    int s=1, p=2, r=3;
    int count1=0, count2=0;

    int n;
    printf("Enter how many times you want to play the game ?\n");
    scanf("%d", &n);

    printf("Press s to choose scissor. press p to choose paper. press r to choose rock.\n");

    for (int k = n; k>0; k--)
    {
       int bot;
       srand(time(0));
       bot = rand()%3 + 1;

       char you;
       printf("Enter your choice - \n");
       scanf("\n%c", &you); 

       if (you=='s' && bot==p)
       {
           printf("You choose scissor, Bot chooses paper.\n");
           count1++;
           printf("Bot scores %d\n", count2);
           printf("You scores %d\n", count1);
       }
       else if (you=='s' && bot==r)
       {
           printf("You choose scissor, Bot chooses rock.\n");
           count2++;
           printf("Bot scores %d\n", count2);
           printf("You score %d\n", count1);
       }
       else if (you=='s' && bot==s)
       {
           printf("You choose scissor, Bot chooses scissor.\nNo point.\n");
       }
       else if (you=='p' && bot==s)
       {
           printf("You choose paper, Bot chooses scissor.\n");
           count2++;
           printf("Bot scores %d\n", count2);
           printf("You score %d\n", count1);
       }
       else if (you=='p' && bot==r)
       {
           printf("You choose paper, Bot chooses rock.\n");
           count1++;
           printf("Bot scores %d\n", count2);
           printf("You score %d\n", count1);
       }
       else if (you=='p' && bot==p)
       {
           printf("You choose paper, Bot chooses paper.\nNo point.\n");
       }
       else if (you=='r' && bot==s)
       {
           printf("You choose rock, Bot chooses scissor.\n");
           count1++;
           printf("Bot scores %d\n", count2);
           printf("You score %d\n", count1);
       }
       else if (you=='r' && bot==p)
       {
           printf("You choose rock, Bot chooses p.\n");
           count2++;
           printf("Bot scores %d\n", count2);
           printf("You score %d\n", count1);
       }
       else if (you=='r' && bot==r)
       {
           printf("You choose rock, Bot chooses rock.\nNo point.\n");
       }
    }
    
    if (count2 > count1)
    {
        printf("Bot wins the match.\nYou lose.");
    }
    else if (count2 < count1)
    {
        printf("Congratuations! You won the match.");
    }
    else printf("Match draw.");
    
    }
    
    return 0;
}