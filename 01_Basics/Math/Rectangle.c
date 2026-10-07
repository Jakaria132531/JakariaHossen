#include<stdio.h>
#include<math.h>
int main(){
float length,width,area,perimeter,diagonal;
printf("Enter Length and Width accordingly of a Ractangle._");
scanf("%f %f",&length,&width);
area=length*width;
perimeter=2*(length+width);
diagonal=sqrt(pow(length,2)+pow(width,2));

printf("Area of the rectangle is %.2f unit.\nPerimeter of the rectangle is %.2f unit.\nDiagonal of the rectangle is %.2f unit.\n",area,perimeter,diagonal);
    return 0;
}