#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class ADD
{
  int a,b,c;
  public:
  void input();
  void display();
  void writeinfile();
};
void ADD ::writeinfile()
{
 ofstream f("my.txt");
cin>>a>>"+">>b>>"=">>c;
 f.close();
 }
 void main()
 {
 ADD o;
 o.input();
 o.writeinfile();
 o.display();
}



