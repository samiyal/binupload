#include<iostream.h>
#include<conio.h>
class A
{
  int a;
  public:
  void test()
  {
  cout<<"abandoneed function\n";
 }


  void sum(int a,int b)
  {
  int c;
  cout<<"enter the vaklue of the a and b";
  cin>>a>>b;
  c=a+b;
  cout<<c<<endl;
  }
  void sam()
  {
  int n;
  cout<<"enter the value of the n";
  cin>>n;
  cout<<n;
  if(n/2==0)
  {
  cout<<"the number entred is even ";
}
else
{
 cout<<"number is the odd number";
}

 }
  void plural()
  {
  cout<<"samiyal masdsy 3";
  cout<<a;
}
};
int main()
{

int ch;
clrscr();
cout<<"enter the choice\a ";
cin>>ch;
cout<<ch;
switch(ch)
{
case 1:
 A  W,R,T,C;
 T.test();
 W.plural();
 R.sum(3,6);
 T.sam();
break;
case 2:
break;
getch();
clrscr();
return 0;
}
}