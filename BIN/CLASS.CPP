#include<iostream.h>
#include<conio.h>
class A
{
  int a;
  int b;
  public:
  A(int a,int b)
  {
    this->a=a;
    this->b=b;
    cout<<(this->a+this->b)<<endl;

    }

    };
    void main()
    {
    A o(3,4);
    getch();

    }