#include<fstream.h>
#include<iostream.h>
#include<fstream.h>
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
o.x=22;
clrscr();
strcpy(o.name,"samiyal massy is a great person");
cout<<o.x;
ofstream f;
f.open("fom.bin",ios::binary);
int l=sizeof(A);
f.write((char*)&o,l);
f.close();
getch();
clrscr();
ifstream ff;
ff.open("fom.bin",ios::binary);
char a[40];
A m;
ff.read((char*)&m,sizeof(m));
cout<<m.name;
cout<<m.x;
ff.close();
getch();
}