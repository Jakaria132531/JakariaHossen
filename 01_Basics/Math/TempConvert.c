#include<stdio.h>
int main(){
 float Temp,Celcius,Fahrenheit;
 int choice;
 printf("Enter your choice which type of temperature convert do you want?\n"
"1.Fahrenheit to Celcius.\n"
"2.Celcius to Fahrenheit._");
scanf("%d",&choice);

switch (choice)
{
case 1:
printf("Enter your Fahrenheit Temperature._");
scanf("%f",&Fahrenheit);
     Celcius=(5.0/9.0)*(Fahrenheit-32);
     printf("\nYour converted temperature is %.2f\n",Celcius);
    break;
case 2:
printf("Enter your Celcius Temperature._");
scanf("%f",&Celcius);
     Fahrenheit=((9.0/5.0)*Celcius)+32;
     printf("\nYour converted temperature is %.2f\n",Fahrenheit);
    break;
  
default:
printf("Please enter a valid choice.");
    break;
}


    return 0;
}