#include<iostream.h>
#include<conio.h>
class B;
class A
{
  friend void fun();
  void fun1();
  public:
  int x;
  void display()
  {
  cout<<x<<endl;
  }
  friend void fun();
  void  fun1();
 public:
  friend class B;
};
class B
{
   public:
   void test(A &o)
   {
   cout<<"enter value of x"<<endl;
   cin>>o.x;
   o.display();
   }
   };
 void A ::fun1()
 {
 cout<<"test 1"<<endl;
 }
 void fun()
 {
 cout<<"test";
 }
 int main(int argc,char*argv[])
 {
 A w;
 fun();
 B o;
 o.test(w);
 return 0;
 }



