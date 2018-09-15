#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,r,c,array[5][5];
clrscr();
printf("enter the row and the columns\n");
scanf("%d",&r);
printf("rows=%d",r);
printf("==========================\n");
printf("enter the number of the columns\n");
scanf("%d",&c);
printf("columns=%d",c);
printf("=========================\n");
printf("enter the elements in your MATRIX\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
 scanf("%d",&array[5][5]);
}
}
printf("your matrix is:-\n");
for(i=0;i<3;i++);
{
for(j=0;j<3;j++)
{
printf("matrix=%d\n",array[5][5]);
}
printf("\t");
}

getch();
}