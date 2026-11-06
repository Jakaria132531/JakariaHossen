#include<stdio.h>
int main(){

int n,first,last;
printf("enter a number.");
scanf("%d",&n);
last=n%10;
do
{
    n=n/10;
} while (n>=10);
 first=n;

printf("first=%d\nlast%d\n",first,last);


}