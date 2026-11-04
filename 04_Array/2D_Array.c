#include<stdio.h>
int main(){

int numbers[][3]={
    {12,12,34},
    {3,4,76},
    {9,7,54}, 
    {7,6,24}}; 
    int size=sizeof(numbers[0])/sizeof(numbers[0][0]);  

/*  char charecter[][3]={{'a','b','c'},
 {'g','h','d'},
{'w','y','r'}};
   */ 
/*
char fruits[][3]={{"apple","banana","strawbery"},
{"orange","pineapple","pumpkin"},
{"coconut","olive","lemmon"}};
*/
/*
char fruits[][10]={"apple",
  "banana",
  "strawbery"};
int size=sizeof(fruits)/sizeof(fruits[0][1]);
//fruits[0][0]='s';
*/
 /* for (int i = 0; i <3; i++)
    {
       for (int j = 0; j <3; j++)
       {
      printf("%c ",fruits[i][j]);
    }
       printf("\n");
    }  
  */
 
 // printf("%c ",fruits[0][0]);
  printf("%d ",size);

    return 0;
}