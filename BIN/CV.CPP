#include<stdio.h>
#include<conio.h>
struct name
{
  int a;

};
typedef int shakti ;
typedef struct name MYNAME;
void main()
{

  shakti a;
  shakti b;
  shakti c;
  clrscr();
  a=4;
  b=5;
  c=a+b;
  printf("%d",c);
  MYNAME m;
  m.a=45;
  printf("%d\n",m.a);
  getch();
  }

