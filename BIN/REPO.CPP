#include<stdio.h>
#include<conio.h>
struct student
{
int marks;
char name[40];
}obj;
void enter()
{
printf("enter the marks of the student \n");
scanf("%d",&obj.marks);
printf("enter the name of the student \n");
scanf("%d",&obj.name[40]);
}
void display()
{
printf("marks=%d",obj.marks);
printf("name=%d",obj.name[40]);
}
void main()
{
clrscr();
enter();
display();
getch();
}
