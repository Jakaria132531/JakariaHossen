#include<stdio.h>
#include<stdbool.h>
int main(){

 int fixPass=1234,passUser,count;
 bool Ncount=false;

 
for(count=1;count<=3;count++){
  printf("Enter your password._");
 scanf("%d",&passUser);

 if(fixPass==passUser){
printf("correct.");
    break;
}else {
printf("Your password is wrong.");
}

}
 if(count==3){
  Ncount=true;  
 } 
 if (Ncount && fixPass==passUser )
 {
   printf("your account is now opend.");
 }
  else if (fixPass==passUser)
 {
   printf("your account is now opend.");
 } 
 else{
     printf("Your have %d times attempeted. Your account is locked.",count-1);
 }

    return 0;

}