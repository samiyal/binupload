#include<iostream.h>
#include<fstream.h>
int main()
{
 ofstream out("inventary");
 if(!out)
 {
 cout<<"cannot open inventory file\n";
 return 1;
 }
 out<<"radios"<<39.95<<endl;
 out<<"toasters"<<19.35<<endl;
 out<<"mixers"<<24.80;endl;
 out.close();
 return 0;




}