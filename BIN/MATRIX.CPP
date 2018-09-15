#include<stdio.h>
#include<conio.h>
int matrix1()
{
int i,j,r,c,array[4][4];
clrscr();
printf("enter the value of the rows\n");
scanf("%d",&r);
scanf("%d",&c);
printf("%d\n%d",r,c);
printf("-----------------------------\n");
printf("enbter the elements in the array\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&array[r][c]);
 }
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",array[r][c]);
}
printf("\n");
}
}
int matrix2()
{
int i,j,r,c,array[4][4];
clrscr();
printf("enter the value of the rows\n");
scanf("%d",&r);
scanf("%d",&c);
printf("%d\n%d",r,c);
printf("-----------------------------\n");
printf("enbter the elements in the array\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&array[r][c]);
 }
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",array[r][c]);
}
printf("\n");
}
}
void main ()
{
matrix1();
matrix2();

}