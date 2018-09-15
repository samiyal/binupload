#include<stdio.h>
#include<conio.h>
int main(void)
{
 int isqrd, i;
 printf("enter a number:");
 scanf("%d",&i);
 isqrd=i>0?i*i:-(i*i);
 printf("%d squared is %d",i,isqrd);
 return 0;
 getch();
 }
