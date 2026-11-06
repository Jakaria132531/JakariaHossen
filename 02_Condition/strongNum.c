#include<stdio.h>
int main(){

int n,remainder,strong,total,sum=0;

printf("enter a number_");
scanf("%d",&n);
    do
    {
             remainder=n%10;
             strong=1;
             for (int i = 1; i <=remainder; i++)
             {
                strong*=i;
             }  
             total+=strong;               
             n=n/10;

    } while (n!=0);
    
printf("%d",total);


    return 0;
}