#include<stdio.h>
int main(){
 float marks;
 printf("Enter your marks here to check your grade:_");
 scanf("%f",&marks);
 if(marks>100 || marks<0){
    printf("You've entered an invalid marks value. Please enter marks between zero(0) to hundred(100).\n");
 } else if(marks>=80 && marks<=100){ 
    printf("Your grade is A+\n");
 } else if(marks>=70 && marks<80){
    printf("Your grade is A\n");
 } else if(marks>=60 && marks<70){
    printf("Your grade is A\n");
 } else if(marks>=50 && marks<60){
    printf("Your grade is B\n");
 } else if(marks>=40 && marks<50){
    printf("Your grade is C\n");
 } else if(marks>=33 && marks<40){
    printf("Your grade is D\n");
 } else{
    printf("You have failed the exam. Your grade is F\n");
 }



    return 0;

}