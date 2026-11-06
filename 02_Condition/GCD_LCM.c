#include<stdio.h>
int main(){
    int a,b,c,d,reminder,gcd,lcm;
   
    printf("enter two number to calculate gcd and lcm:\n");
    scanf("%d %d",&a,&b);
     c=a;
    d=b;
    do
    {   
        reminder=a%b;
        a=b;
        b=reminder;       
    } while (b!=0);    
gcd=a;
printf("gcd=%d\n",gcd);

lcm=(c*d)/gcd;
printf("lcm=%d\n",lcm);

    return 0;
}