# define n 12
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int *p;
 int n;
 clrscr();
 cout<<"enter the marks\n";
 cin>>n;
 p=(int*)malloc(sizeof(int)*n);
 for(int i=0;i<n;i++)
 {
  cin>>p[i];

 }
 for(i=0;i<n;i++)
 {
 cout<<p[i];

 }
 getch();
 return 0;
 }


