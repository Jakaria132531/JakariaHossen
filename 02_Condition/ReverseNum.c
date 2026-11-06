#include<stdio.h>
int main(){
    
    int n,m,remainder,sum=0;
    printf("enter a number_");
    scanf("%d",&n);
   // m=n;
do{
    remainder=n%10;
    sum=sum*10+remainder;
    n=n/10;
    
}while(n!=0); 

printf("%d",sum);
    return 0;
}