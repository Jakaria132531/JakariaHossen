#include<stdio.h>
#include<string.h>
int main(){
char a,b,c[20],d[20],e[20];
printf("Enter a character:_");
scanf("%c",&a);
printf("geting a char using scanf function. you've entered '%c'\n",a);
while(getchar()!='\n'); 
// If there is only one leftover '\n', using getchar() is enough.
// If we want to clear the entire remaining input line,
// while (getchar() != '\n'); is safer because it removes
// all remaining characters until it reaches the newline.

printf("Enter one more character:_");
b=getchar();
printf("geting one more char using getchar function. you've entered ");
putchar(b);
while(getchar()!='\n');

printf("Enter Your name here._");
scanf("%s", c);
printf("Your name has been received using scanf function which is '%s'\n", c);
while(getchar()!='\n');// it removes all remaining characters until it reaches the newline.

printf("Enter your name one more time._");
fgets(d, sizeof(d), stdin);
d[strcspn(d, "\n")] = '\0';
printf("Your name has been received using fgets function which is '%s'\n", d);

printf("Enter your name last time._");
fgets(e, sizeof(d), stdin);
e[strcspn(e, "\n")] = '\0';
printf("Your name has been received using fgets function which is_");
puts(e);




    return 0;
}