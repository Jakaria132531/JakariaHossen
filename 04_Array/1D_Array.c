#include<stdio.h>
int main(){

int Numbers[]={10,12,45,65,34,39};
char charecter[]={'a','e','i','o','u','j'};

//int size=sizeof(Numbers)/sizeof(Numbers[0]);

for (int i = 0; i < sizeof(Numbers)/sizeof(Numbers[0]); i++)
{
printf("%d ",Numbers[i]);
printf("%c\n",charecter[i]); 
 } 



 

    return 0;
}