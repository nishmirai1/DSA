#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int stack[MAXSIZE],top=-1,ele;
int push(int ele)
{
if(top==MAXSIZE-1)
{
printf("Stack is full");
exit(0);
}
stack[++top]=ele;
return 0;
}

int pop()
{
int ele;
if(top == -1)
{
printf("\n stack is empty");
return 0;
}
ele=stack[top --];
return ele;
}

void display()
{
int i;
if(top == -1)
{
printf("\n stack is empty");
return;
}
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}

void main()
{
int ch,opt=1;
while(opt)
{
printf("\n stack menu");
printf("\n1.push\n2.pop\n3.display\n4.exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter element to be inserted");
	scanf("%d",&ele);
	push(ele);
	break;

case 2: pop(ele);
	break;

case 3:display();
	break;

default:printf("Wrong choice");
	exit(0);
}
printf("\n Do you want to continue(0/1)");
scanf("%d",&opt);
}
}


              
