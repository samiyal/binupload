#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p;
int n;
clrscr();
printf("enter the number\n");
scanf("%d",&n);
p=(int*)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
{
printf("\n%d",p[i]);
}
getch();
return 0;
}



