#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
struct A
{
  int x;
  char name[20];
};
void main()
{
 A o;
strcpy(o.name,"samiyal massy");
ofstream f;
f.open("ewr.bin",ios::binary);
int l=sizeof(A);
f.write((char*)&o,l);
f.close();
clrscr();
ifstream ff;
ff.open("ewr.bin",ios::binary);
char a[40];
A m;
ff.read ((char*)&m,sizeof(m));
ff.close();
getch();
}
