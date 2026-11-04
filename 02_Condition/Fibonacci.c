#include<stdio.h>
int main(){

    int n,a=1,b=1,sum;
    printf("Enter a number:");
    scanf("%d",&n);
 for (int i = 0; i <n; i++) 
 {
    if (i==0 )
    {printf("%d ",a); 

    } else if( i==1){printf("%d ",a); 
}else {
    
    sum=a+b;
 a=b;
 b=sum;
 printf("%d ",sum);}
}
     

    return 0;
}