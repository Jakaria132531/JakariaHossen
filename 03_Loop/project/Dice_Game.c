#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){

    int guess,dice,max,min;
    char wish[20]="";
    max=6;
    min=1;
       srand(time(NULL));


    do
    {
    dice=rand()%(max-min +1)+min;

    printf("Guess a number between 1 to 6 to play Dice Rolling.");
    scanf("%d",&guess);
while(getchar()!='\n');
    if (dice==guess)
    {
          printf("You win.\n");
    }else
    {
        printf("Lose.\n");
    }

    printf("do you want to play again. enter Yes or No_");
    fgets(wish,sizeof(wish),stdin);
    wish[strcspn(wish,"\n")]='\0';

    } while (strcmp(wish,"No")!=0);
    
    printf("Exit!\nThank you for playing this game.");


    return 0;
}