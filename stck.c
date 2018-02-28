#include<stdio.h>
#include<stdlib.h>
int a[' '],n;
int top=-1;
void push();
void pop();
void display();
int main()
{
int ch;
char y;
printf("Enter the stack size: " );
scanf("%d",&n);
do
{
printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("\n Invalid choice ");
break;
}
printf("\n do you want to continue : ");
scanf(" %c",&y);
}
while((y=='y')||(y=='Y'));
}
void push()
{
int item;
printf("\n Enter the element : ");
scanf("%d",&item);
if(top==n)
printf("\n stack is full");
else
a[++top]=item;
}
void pop()
{
int p;
if(top==-1)
printf("\n stack is empty ");
else
p=a[top--];
}
void display()
{
int i;
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

