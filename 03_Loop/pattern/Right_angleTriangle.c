#include<stdio.h>
int main(){
/*
(1) to make this print collumn num [Increasing Number Triangle]
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
(2) to make this print row num [Same Number Triangle]

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

(3) to make this pattern, take a var in inner loop and increment it and print that, like (num=0,num++) [Continuous Number Triangle]

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
(4) to make this pattern, start row and collumn initialize from 0, and make a print condition in inner loop is(n-j) [Reverse Number Triangle]

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
(5) to make this pattern, make sum row and collumn number in inner loop, use condition that if the sum is divisable by 2(even),print 1, else print 1 
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
(6) to make this pattern, print ASCII value of the charecter accordingly with column number
A
A B
A B C
A B C D
A B C D E
(6) to make this pattern, print ASCII value of the charecter accordingly with row number
A
B B
C C C
D D D D
E E E E E


*/
    int n,count=0;
    printf("enter a name.");
    scanf("%d",&n);

    for (int i = 0; i <n; i++)
    {
         for (int j = 0; j <=i; j++)
         { 
             printf("%c ",65+count);
             count++;
         }
         printf("\n");
    }
    
    return 0;
}