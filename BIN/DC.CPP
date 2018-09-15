#include<stdio.h>
#include<conio.h>
struct sam
{
int a,b;
char ch;
};
void f1(struct sam parm);
int main(void)
{
sam arg;
arg.a=1000;
f1(arg);
getch();
getch();
}
void f1(struct sam parm)
{
printf("%d",parm.a);
}
