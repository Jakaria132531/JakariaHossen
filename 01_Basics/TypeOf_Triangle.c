#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter 3 side of a triangle to check which type it is.");
    scanf("%d %d %d",&a,&b,&c);
if(a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b){
    if (a==b && a==c && b==c)
    {
        printf("equilateral");
    }else if(a==b || a==c || b==c ){
        printf("isosceles");
    }else printf("escelene");
    
}else printf("triangle is not possible to be formed by these angles");

    return 0;
}