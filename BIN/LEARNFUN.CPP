#include<conio.h>
#include<iostream.h>
#include<string.h>
int string_in(char*);
void main()
{
char str[20];
int length;
cout<<"\n enter the string";
gets(str);
length=string_in(str);
cout<<"the length of the given string "<<str<<length;
}
int string_in(char*p)
{
int count=0;
while(*p!='\0')
{
count++;
p++;
}
return count;
}





