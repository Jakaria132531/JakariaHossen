#include<stdio.h>
int main(){

    int quantity,choice;
    float Discount_price,Total_price, total;
    printf("Enter your choice\n"
"1.Burger -- price:250tk\n"
"2.Pizza -- price:450tk\n"
"3.Chicken Fry -- price:180tk\n"
"4.French Fries -- price:120tk\n"
"5.Sandwich -- price:150tk\n"
"6.Pasta -- price:300tk\n"
"7.Fried Rice -- price:220tk\n"
"8.Chicken Curry -- price:200tk\n"
"9.Coffee -- price:100tk\n"
"10.Cold Drinks -- price:50tk\n__"  );

scanf("%d",&choice);

switch (choice)
{
case 1:
printf("30 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(250.00*quantity);
 Discount_price=total*0.3;
 Total_price=total-Discount_price;
 printf("you've taken= %d Burger.\nYour total price is= %.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 2:
printf("50 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(450.00*quantity);
 Discount_price=total*0.5;
 Total_price=total-Discount_price;
 printf("you've taken =%d Pizza.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 3:
printf("15 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(180.00*quantity);
 Discount_price=total*0.15;
 Total_price=total-Discount_price;
 printf("you've taken =%d Chicken Fry.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 4:
printf("12 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(120.00*quantity);
 Discount_price=total*0.12;
 Total_price=total-Discount_price;
 printf("you've taken =%d French Fries.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 5:
printf("12 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(150.00*quantity);
 Discount_price=total*0.12;
 Total_price=total-Discount_price;
 printf("you've taken =%d Sandwich.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 6:
printf("20percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(300.00*quantity);
 Discount_price=total*0.20;
 Total_price=total-Discount_price;
 printf("you've taken =%d Pasta.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 7:
printf("19 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(220.00*quantity);
 Discount_price=total*0.19;
 Total_price=total-Discount_price;
 printf("you've taken =%d Fried Rice.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 8:
printf("17percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(200.00*quantity);
 Discount_price=total*0.17;
 Total_price=total-Discount_price;
 printf("you've taken =%d  Chicken Curry.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 9:
printf("29percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(100.00*quantity);
 Discount_price=total*0.29;
 Total_price=total-Discount_price;
 printf("you've taken =%d Coffee.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;
case 10:
printf("5 percent discount\n");
 printf("Enter quantities_");
 scanf("%d",&quantity);
 total=(50.00*quantity);
 Discount_price=total*0.05;
 Total_price=total-Discount_price;
 printf("you've taken =%d Cold Drinks.\nYour total price is=%.2f\nDiscount price is= %.2f\nNew Total price= %.2f\n",quantity,total,Discount_price,Total_price);

break;

default:
printf("Enter a valid number from given range.");
    break;
}




    return 0;
}
