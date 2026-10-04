#include<stdio.h>
int main(){

    int a,b,c;

    printf("Enter a number which you want to calculate:_"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Avarage\n");
         scanf("%d",&a);
         printf("Enter Your two numbers:_");
            scanf("%d %d",&b,&c);
        switch(a){
            case 1:
            int  sum=b+c;
             printf("The sum of %d + %d= %d \n",b,c,sum);
             break;
            case 2:
           int  sub=b-c;
            printf("The subtraction of %d - %d = %d",b,c,sub);
            break;
            case 3:
            int multip=b*c;
             printf("The multiplication of %d * %d = %d",b,c,multip);
             break;
             case 4:
             int divide=b/c;
             printf("The division of %d / %d = %d",b,c,divide);
             break;
             case 5:
             float avarage=(b+c)/2.0; 
             printf("The avarage of %d and %d=%.2f",b,c,avarage);
             break;






            default:
            printf("You've entered an invalid number. Please enter a number between 1 to 5.\n");
            break;
        }

    return 0;
}