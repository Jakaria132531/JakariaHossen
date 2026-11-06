#include<stdio.h>
#include<math.h>

int main(){
 int n,remainder,total=0,result;
 printf("enter a number_");
 scanf("%d",&n);
 do
 {     result=0;
     remainder=n%10;  
       
     result=pow(remainder,3);
     total+=result;
      n=n/10;
     

 } while (n!=0);
 
printf("%d",total);

    return 0;
}