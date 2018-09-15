#include<stdio.h>
#include<conio.h>
struct student
{
  int roll;
  char name[20];
}obj;
void enter();
void display();
void main()
{
  clrscr();
  enter();
  display();
  getch();
  }
  void display()
  {
  printf("\n---------\n");
  printf("roll no=%d",obj.roll);
  printf("name=%s",obj.name);
  }
  void enter()
  {
  printf("\nenter roll no\n");
  scanf("%d",obj.roll);
  printf("\n\enter name\n");
  scanf("%s",&obj.name);
  }






