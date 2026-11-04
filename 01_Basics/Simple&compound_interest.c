#include<stdio.h>
int main(){
    float P,R,T,Simple_interest;
    printf("Enter your principal amount,Rate,Time accordingly_");
    scanf("%f %f %f",&P,&R,&T);

    Simple_interest=(P*R*T)/100;
    printf("The simple interest is: %f",Simple_interest);




    return 0;
}