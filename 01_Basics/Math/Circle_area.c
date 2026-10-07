#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main(){
float area,radius,diameter,circumference;

printf("Enter the radius value to calculate the are of circle:_");
scanf("%f",&radius);
diameter=2*radius;
area=PI* pow(radius,2);
circumference=2*PI*radius;
printf("Your circle Diameter value is %.2funit\nArea value is %.2funit and\nCircumference value is %.2funit\n",diameter,area,circumference);

    return 0;
}