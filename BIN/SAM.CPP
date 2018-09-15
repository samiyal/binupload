#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i,n;
char array[20];
int gd=DETECT,gm,width,bytes,x,y;
initgraph(&gd,&gm,"c:\\tc\\bgi");
moveto(100,100);
moverel(100,-100);
x=getx();
y=gety();
for(i=0;i<10;i++)
{
setcolor(GREEN);
setbkcolor(WHITE);
line(300,3,300,300);
bar3d(40000,100,200,200,20,1);
setfillstyle(8,RED);
floodfill(100,100,GREEN);
rectangle(400,100,200,400);
ellipse(100,100,0,360,50,25);
circle(100+1,100,100);
outtextxy(100,100,"\nsamiyal massy is great");
width=textwidth("\nsamiyal massy experiment\n");
cprintf(array,"etxtwidth=%d\N",width);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,RED);
outtext(array);
}
printf("\nenter the  1 or o for stopping or exiting the output screen\n");
scanf("%d",&n);
if(n==1)
{
delay(10000);
}
else
{
exit(0);
}
closegraph();
}