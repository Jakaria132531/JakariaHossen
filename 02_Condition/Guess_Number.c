#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
 int value,guess,max,min,count=1;
 max=100;
 min=1;
 printf("Guess a number._");
 scanf("%d",&value);

 srand(time(NULL));

 guess=rand()%(max-min+1)+min;

 while(value!=guess){
 if (value>guess)
 {
     printf("Too High.");
 }else if(value<guess)
 {
     printf("Too Low.");
 }
 printf("\nGuess a number._");
 scanf("%d",&value);
 count++;
 }
    printf("Your guess number is Correct!You guessed total %d times.",count);
 
    return 0;

}