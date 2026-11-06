#include<stdio.h>
#include<math.h>

#define PI 3.1416
int main(){
 float n,volume;
 printf("enter the redius of sphere_");
 scanf("%f",&n);

 volume=(4.0/3.0)*PI*pow(n,3);
printf("volume=%f\n",volume);

    return 0;
}