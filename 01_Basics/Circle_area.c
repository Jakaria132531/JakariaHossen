#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main(){
int a;
printf("Enter the radius value to calculate the are of circle:_");
scanf("%d",&a);
float area=PI* pow(a,2);
printf("Your circle area value is %.2f\n",area);

    return 0;
}