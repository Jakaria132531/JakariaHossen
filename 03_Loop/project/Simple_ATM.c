#include<stdio.h>
int main(){

    float Balance,Deposit,Withdraw;
    int choice=0;
    printf("Enter your balance here._");
    scanf("%f",&Balance);
   
do{
    printf("Which action do you want to take.\n"
    "1.Check Balance\n"
    "2.Deposit\n"
    "3.Withdraw\n"
    "4.Exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    printf("Your current balance is %.2f BDT\n",Balance);
    break;
    case 2:
      printf("How much money do you want to Deposit?_");
      scanf("%f",&Deposit);
      Balance+=Deposit;
      printf("Your current balance is %.2f BDT\n",Balance);
    break;
    case 3:
      printf("How much money do you want to Withdraw?_");
      scanf("%f",&Withdraw);
      Balance-=Withdraw;
      printf("Your current balance is %.2f BDT\n",Balance);
    break;

    default:
    printf("Invalid choice!Please enter correct choice.");
    break;

    }
}while (choice!=4);
printf("Exit!\nThank you so much to use our service.");

    return 0;
}