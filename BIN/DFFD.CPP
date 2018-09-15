#include<iostream.h>
#include<conio.h>
class base
{
 public:
 virtual void test(){}
 };
 class der:public base
 {
 public:
 void test()
 {
 cout<<"test called";

 }
 };
 void main()
 {
 der b;
 b.test();
 getch();

 }

