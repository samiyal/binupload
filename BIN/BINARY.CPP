#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
struct A
{
int x;
char name[40];
};
void main()
{
A o;
o.x=34;
strcpy(o.name,"samiyal massy");
cout<<o.x;
ofstream f;
f.open("warehouse.bin",ios::binary);
int l=sizeof(A);
f.write((char*)&o,l);
f.close();
}