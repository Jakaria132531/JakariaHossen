#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
  float price=100;
  bool isStudent=false;
  bool isSenior=false;
  char occupassion[20],age[20];
  printf("If You are a Student,so write Student.otherwise press the enter button just:_");
  fgets(occupassion,sizeof(occupassion),stdin);
  occupassion[strcspn(occupassion,"\n")]='\0';

  printf("If You are a Senior,so write Senior.otherwise press the enter button just:_");
  fgets(age,sizeof(age),stdin);
  age[strcspn(age,"\n")]='\0';

 if (strcmp(occupassion,"Student")==0)
 {
     isStudent=true;
 }  
 if (strcmp(age,"Senior")==0)
 {
    isSenior=true;
 }
  if (isSenior)
  {
     if (isStudent)
     {
         printf("Main price is %d.You got total 30 percent discount. 20 percent for being Student and rest of 10 percent for being Senior\n.",price);
         price *= 0.7;

     }
     
} else if (isSenior)
{
         printf("Main price is %d.You got only 10 percent discount for being Senior.\n",price);
         price *= 0.9;

} else if (isStudent)
{
       printf("Main price is %d.You got only 20 percent discount for being Student.\n",price);
       price *= 0.8;

        
} else{
printf("You didn't get any discount.\n");

}

printf("You total price is %.2f",price);
    return 0;
}