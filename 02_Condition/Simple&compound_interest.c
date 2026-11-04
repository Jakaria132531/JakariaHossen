#include<stdio.h>
int main(){
    float P,R,T,Simple_interest,Compound_interest,A;
    printf("Enter your principal amount,Rate,Time(year) accordingly to calculate simple and compound interest:\n");
    scanf("%f %f %f",&P,&R,&T);

    Simple_interest=(P*R*T)/100;

A=P*pow(1+R/100,T);
Compound_interest=A-P;

    printf("The simple interest is: %f\nThe compound interest is: %f\n",Simple_interest,Compound_interest);




    return 0;
}