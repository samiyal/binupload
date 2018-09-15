#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int sum(int a,int b)
{
int c;
printf("-----------------------------\n");
printf("enter the value of the first number\n");
scanf("%d",&a);
printf("number1=%d",a);
printf("enter the value of the second number \n");
scanf("%d",&b);
printf("number2=%d\n",b);
printf("--------------------------------\n");
c=a+b;
printf("sum of the two numbers are=%d",c);
return c;
}
void main()
{
int x,y,z;
scanf("%d",&x);
scanf("%d",&y);
sum(x,y);

}
