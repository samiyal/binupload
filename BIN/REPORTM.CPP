#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top;
struct node();
{
   int data;
   struct node *node
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
  int choice,value;
  clrscr();
  printf("\n **************MENU*********************  \n");
  printf("1.push\n2.pop\n3.display/n4.exit\ n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  printf("%d",&value);
  scanf("%d",&value);
  push(value);
  break;
  case 2:
  pop();
  break;
  case 3:
  display();
  break;
  case 4:
  exit(0);
  default:
  printf("\n wrong slection please try agagin\n");
  }
  }

  void push(int value)
  {
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=value;
  if(top==NULL)
  newnode->next=top;
  top=newnode;
  printf("\n insertion is succesfull!!!!");
  }
  void pop()
  {
  if(top==NULL)
  {
  printf("\n stack is empty\n");
  else
  {
  struct node *temp=top;
  printf("\n deleted elements :%d",temp->data);
  top=temp->next;
  free(temp);
  }
  }
  void display()
  {
  if(top==NULL)
  printf("\n stack is empty!!!1");
  else
  {
  struct node *temp=top;
  while(temp->next!=NULL)
  {
  printf("%d---->",temp->data);
  temp=temp->next;
  }
  printf("%d---->NULL",temp->data);
  }
  }
  };


