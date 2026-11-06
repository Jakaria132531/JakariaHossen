#include<stdio.h>
int main(){
    int n,count;
    printf("enter a range to print all prime number.");
    scanf("%d",&n);

    for (int i = 2; i <=n; i++){
        count=0;
        for (int j = 1; j <=i ; j++)
         {
             if (i%j==0)
             {
                 count++;
             }
             
         }
         
        if (count==2) // prime number has been divided by just two number.by one and itself 
        {
            printf("%d ",i);
        }
        
}
    


    return 0;
}