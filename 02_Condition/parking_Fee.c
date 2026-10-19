#include<stdio.h>
int main(){


    int veichleType,duration,parkingFee=1;

/*

printf("Enter you veichle type._\n"
"1.Motorcycle\n"
"2.Car\n"	
"3.Bus\n"
"4.Truck\n"    );
scanf("%d",&veichleType);
if (veichleType<=4)
{
printf("Enter your duration._\n"
"1.Motorcycle---per hour:20tk\n"
"2.Car---per hour:50tk\n"
"3.Bus---per hour:100t\nk"
"4.Truck---per hour:120tk\n" ); 
scanf("%d",&duration);
 
} else
{
    printf("Enter a valid number between 1 to 4\n");
}
 */

printf("Enter your parking duration(h)._\n"
"1.Motorcycle---per hour:20tk\n"
"2.Car---per hour:50tk\n"
"3.Bus---per hour:100tk\n"
"4.Truck---per hour:120tk\n" ); 
scanf("%d",&duration);


printf("Enter you veichle type._\n"
"1.Motorcycle\n"
"2.Car\n"	
"3.Bus\n"
"4.Truck\n"    );
scanf("%d",&veichleType);
switch (veichleType)
{
case 1:
   parkingFee=20*duration;
printf("Your parking fee is %d for Motorcycle for %d\n",parkingFee,duration);
    break;
case 2:
   parkingFee=50*duration;
printf("Your parking fee is %d for Car for %d\n",parkingFee,duration);
    break;
case 3:
   parkingFee=100*duration;
printf("Your parking fee is %d for Busfor %d\n",parkingFee,duration);
    break;
case 4:
   parkingFee=120*duration;
printf("Your parking fee is %d for Truckfor %d\n",parkingFee,duration);
    break;

default:printf("enter a valid number between 1 to 4.\n");
    break;
}

    return 0;
}