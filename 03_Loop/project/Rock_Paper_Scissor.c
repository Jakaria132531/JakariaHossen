#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    
int value,max,min;
    max=3;
    min=1;
    printf("Choose a number form below to play the game.\n"
    "1.Rock\n"
    "2.Paper\n"
    "3.Scissor\n _");
    scanf("%d",&value);
    printf("You've entered %d\n",value);

    srand(time(NULL));
    int Computer=rand()%(max-min+1)+min;
     
    if (value==1 && Computer==3)
    {
         printf("Player wins.");
    } else if (value==2 && Computer==1)
    {
         printf("Player wins.");
    }else if (value==3 && Computer==2)
    {
         printf("Player wins.");
    } else
    {
        printf("Computer wins.");
    }
    printf("\nComputer value was %d\n",Computer);
    



    return 0;
}