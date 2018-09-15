#include<iostream.h>
#include<conio.h>
void fun(int n)
{
if(n==0)
{
return;
}
else
{
cout<<n<<endl;
fun(n*1-n);
}
}
void count(int i,int n)
{
  if(i<n)
  {
  cout<<i<<",";
  count(++i,n);
  }
}
int main(int argc,char*argv[])
{
fun(39);
count(1,40);
getch();
clrscr();
return 0;
}


































