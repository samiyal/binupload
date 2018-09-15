#include<iostream.h>
#include<conio.h>
class dummy
{
   int r;
   char name[30];
   public:
   void enter();
   void display();
   };
   void dummy::enter()
   {

   cout<<"dummy"<<endl;
   cin>>r;
   cout<<"name:"<<endl;
   cin>>name;
}
void dummy::display()
{

cout<<r<<name<<endl;

}
int main()
{
 dummy o;
 o.enter();
 o.display();
 return 0;
 }

}



