#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
  int choice,value;
  clrscr();
  printf("\n  :;stack using the linked lists::\=n ");
  while(1)
  {
  printf("1.push\n2.pop\n3.display()\n4.exit\n");
  printf("enter the choice:");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  printf("enter the value to be inserted\n");
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
  printf("\n  wrong choice");
  }
  }
  }
  void push(int value)
  {
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=value;
  if(top==NULL)
  newnode->next=NULL;
  else
  newnode->next=top;
  top=newnode;
  printf("\n insertion is succesful|||");
  }
  void pop()
  {




  }



  }








  }

   }


}