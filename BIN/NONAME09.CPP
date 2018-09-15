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
o.x=34;
strcpy(o.name,"samiyal massy ");
ofstream f;
f.open("dam.bin",ios::binary);
f.write((char*name)&o,sizeof(A));
f.close();


}