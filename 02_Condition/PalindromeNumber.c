#include<stdio.h>
int main(){
 int n,remainder,result=0,m;
 printf("enter a number._");
 scanf("%d",&n);
m=n;
 do
 {
     remainder=n%10;
     result=result*10+remainder;
     n=n/10;

 } while (n!=0);
 if (result==m)
 {
    printf("Palindrome.");
 }else printf("Nor Palindrome."); 
 

    return 0;
}