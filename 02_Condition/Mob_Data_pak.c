#include<stdio.h>
int main(){
int choice;
    float mainBalance;
    printf("Enter your Balance:");
    scanf("%f",&mainBalance);
    printf("Mobile Data Package.\n"
"1.1 GB---1 Day---30tk\n"
"2.3 GB---3 Days---58tk\n"
"3.5 GB---7 Days---98tk\n"
"4.10 GB---7 Days---148tk\n"
"5.15 GB---30 Days---248tk\n"
"6.25 GB---30 Days---398tk\n"
"7.40 GB---30 Days---498tk\n"
"8.60 GB---30 Days---698tk\n"
    );
    printf("Enter the number of packages you want to purchase_");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    if (mainBalance>=30)
    {
     printf("You've purchased 1GB. validity is 1Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-30);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 2:
     if (mainBalance>=58)
    {
    printf("You've purchased 3GB. validity is 3Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-58);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 3:
     if (mainBalance>=98)
    {
    printf("You've purchased 5GB. validity is 7Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-98);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 4:
     if (mainBalance>=148)
    {
    printf("You've purchased 10GB. validity is 7Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-148);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 5:
     if (mainBalance>=248)
    {
    printf("You've purchased 15GB. validity is 30Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-248);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 6:
     if (mainBalance>=398)
    {
    printf("You've purchased 25GB. validity is 30Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-398);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 7:
     if (mainBalance>=498)
    {
    printf("You've purchased 40GB. validity is 30Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-498);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    case 8:
     if (mainBalance>=698)
    {
    printf("You've purchased 60GB. validity is 30Day. It's price is 30tk.\nYour current balance is %.2f tk",mainBalance-698);
   
    } else
    {
        printf("You've insufficient balance.Please Recharge.");
    }
    break;
    
    default:
    printf("Enter a valid number.");
        break;
    }
    return 0;
}