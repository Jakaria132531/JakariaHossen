#include<stdio.h>
 int main(){

    int consultationChoice,consultation,consultatio_Fee=0,mediTest,bedService, Total_Bill;
    int testChoice,testChoice_price=0,bedChoice,bedService_Price=0; 

  printf("Do you want Consultation?\n1.Yes \n2.No_");
  scanf("%d",&consultationChoice);
  if (consultationChoice==1)
  {
 printf("Consultation choice\n"
"1.General Physician---Visiting price:500tk\n"
"2.Specialis Doctor---Visiting price:1,000tk\n"
"3.Professor Consultation---Visiting price:1,500tk\n");
scanf("%d",&consultation);
    
switch (consultation)
{
case 1:
printf("You choose General Physician. Your visiting price is 500tk only.\n");
consultatio_Fee=500;

break;
case 2:
printf("You choose Specialis Doctor. Your visiting price is 1000tk only.\n");

consultatio_Fee=1000;


break;
case 3:
printf("You choose Professor Consultation. Your visiting price is 1500tk only.\n");

consultatio_Fee=1500;

break;

default: printf("enter a valid number.");
    break;
}

} else if(consultationChoice==2){
    printf("You denied to take consultation service."); }
 else printf("enter a valid number between 1 or 2.");


printf("Do you want to do any test.enter 1.yes or 2.no_");
scanf("%d",&testChoice);
if (testChoice==1)
{
 printf("Test choice\n"
"1.CBC---Test price:400tk\n"
"2.Blood Sugar---Test price:200\n"
"3.X-Ray---Test price:800\n"
"4.ECG---Test price:500\n"
"5.Ultrasound---Test price:1,500\n"  );
scanf("%d",&mediTest);
if (mediTest<=5)
{
if (mediTest==1)
 { 
    testChoice_price=400;
}else if (mediTest==2)
{
    testChoice_price=200;
}
else if (mediTest==3)
{
    testChoice_price=800;
}
else if (mediTest==4)
{
    testChoice_price=500;
}
else if (mediTest==5)
{
    testChoice_price=1500;
}
 } else printf("enter number between 1 to 5.");
 


} 
else if(testChoice==2) { printf("you didn't choose any for test.\n"); }
else printf("enter a valid number 1 or 2.");


printf("Do you want to take bed.enter 1.yes or 2.no_");
scanf("%d",&bedChoice);
if (bedChoice==1)
{
 printf("Bed Service (Per Day).\n"
"1.General Ward---Bed price:1,000tk\n"
"2.Cabin---Bed price:3,000tk\n"
"3.Deluxe Cabin---Bed price:5,000tk\n"
"4.ICU---Bed price:10,000tk\n" );
scanf("%d",&bedService);
if (bedService<=4)
{
if (bedService==1)
{

bedService_Price=1000;
}else if (bedService==2)
{
  bedService_Price=3000;
}
else if (bedService==3)
{
  bedService_Price=5000;
}
else if (bedService==4)
{
  bedService_Price=10000;
}
} else printf("choice between 1 to 4");


} 
else if(bedChoice==2) {printf("you didn't choose any for bed.\n"); 
} else printf ("enter a valid number 1 or 2.");
 
Total_Bill=consultatio_Fee+testChoice_price+bedService_Price;
printf("Your Total is %d\n",Total_Bill);
    return 0;
}