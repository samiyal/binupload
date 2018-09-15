/*objective :-  the below c program enables usere to create an structure and make itts objests value and gets its value assiagned to the another variable
  author :-samiyal massy btech(c.se),second year  3rd semester;

  */
#include<stdio.h>
#include<conio.h>
int main(void)
{
struct
{
int a;
int d;
}x,y;
x.a=10;
y=x;
clrscr();
printf("%d",y.a);
getch();
return 0;
}