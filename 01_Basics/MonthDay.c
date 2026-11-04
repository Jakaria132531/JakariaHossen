#include<stdio.h>
int main(){
int month,year;

printf("Enter a number of month and year.");
scanf("%d %d",&month,&year);
if(month<=12 && month>=1){
if(month==2){
    if(year%400==0 || year%4==0 && year%100!=0){
         printf("this is 29 day's month");
    }else printf("this is 28 day's month");
} else if(month==4 ||month==6||month==9||month==11 ){
    printf("this is 30 day's month");
} else printf(" this is 31 days month");

} else printf("invalid input");

    return 0;
}