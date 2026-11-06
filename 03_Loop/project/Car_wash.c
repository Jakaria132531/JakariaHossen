#include<stdio.h>
int main(){

    int serviceChoice,optionalChoice,optional,optionalFee=0,mainFee=0,totalFee;
    printf("Enter your choice._"
"1.Basic Wash----price:300tk\n"
"2.Standard Wash----price:500tk\n"
"3.Premium Wash----price:800tk\n"
"4.Deluxe Wash----price:1,200tk\n"
    );
scanf("%d",&serviceChoice);
if (serviceChoice<=4 && serviceChoice>0)
{
switch (serviceChoice)
{
case 1:
mainFee=300;
break;
case 2:
mainFee=500;
break;
case 3:
mainFee=800;
break;
case 4:
mainFee=1200;
break;

default: printf("Enter a valid number.\n");
    break;
}

} else printf("working else-- Enter number between 1 to 4.\n");




printf("Do you want Optional service? enter 1.Yes or 2.No_");
scanf("%d",&optional);
if (optional==1)
{
     
    printf("Enter your optional choice\n"
"1.Interior Cleaning----price:200tk\n"
"2.Wax Polish----price:400tk\n"
"3.Engine Cleaning----price:500tk\n"
"4.Tire Polish----price:150tk\n"
);
scanf("%d",&optionalChoice);

switch (optionalChoice)
{
case 1:
    
    optionalFee=200;
    break;
case 2:
    
    optionalFee=400;
    break;
case 3:
    
    optionalFee=500;
    break;
case 4:
    
    optionalFee=150;
    break;

default:
    break;
}
    
} else if (optional==2)
{
    printf("You didn't choose optional service.\n");
}else
{
    printf("Enter a valid number 1 or 2.\n");
}


totalFee=mainFee+optionalFee;
printf("Your total bill is %d.main fee is %d and optional fee is %d\n",totalFee,mainFee,optionalFee);



    return 0;
}