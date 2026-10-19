#include<stdio.h>
int main(){

int attempt=0,pin=1234,pinStore;


do
{
printf("Enter a pin_");
scanf("%d",&pinStore);
 if (pin==pinStore)
 {
    printf("Access Granted.\n");
    break;
 }
  else if (attempt<3) {printf("wrong password.\n");
 attempt++;
printf("you can try only 3 times.you've tried %d times\n",attempt);
}
if (attempt==3){printf("Access Denied.");
}
} while (attempt!=3);





    return 0;

}