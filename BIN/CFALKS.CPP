#include<iostream.h>
#include<conio.h>
class base
{
  public:
  void test()
  {
  cout<<"dummy class";

  }
  };
  class der:public base
  {
  public:
  void test()
  {  cout<<"der  test called";
  }
  };

  class der1:public base
  {
  public:
  void test()
  {
  cout<<"der 2 test called";
  }
  };
  class test:public der,public der1;

  {

  public:
  void mytest()
  {
  test();
  }

  };