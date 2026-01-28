#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int x[size],front=0,rear=0;
void add()
{
     if(rear==size)
     {
       printf("Stack is full");
     }
     else
     {
		printf("Enter value you want to add");
		scanf("%d",&x[rear]);
		printf("Value added saccesfuly<<");
		rear++;
     }
}
void disp()
{
      int i;
      if(rear==0)
      {
      printf("Queue is empty..!");
      }
      else
      {
	for(i=front;i<rear;i++)
	{
	 printf("\n\t%d",x[i]);
	}
      }
}
void remo()
{
     if(rear==0)
     {
      printf("Queue is empty");
     }
     else
     {
       printf("Value %d removed succesfully......!",x[front]);
       front++;
       if(front==rear)
       {
	   front=0;
	   rear=0;
       }
     }
}
void srch()
{
    int i,srch,flag=0;
    printf("enter value you want to srch:");
    scanf("%d",&srch);
    for(i=0;i<rear;i++)
    {
	 printf("\n%d",x[i]);
	 if(srch==x[i])
	 {
	     printf("<== value %d found here",srch);
	     flag=1;
	 }
    }
  if(flag==0)
  {
     printf("\n....! Aavi value nthi ! ");
  }
}
void main()
{
       int ch;
       while(1)
       {
	   clrscr();
	   printf("\nEnter 1 for add");
	   printf("\nEnter 2 for display");
	   printf("\nEnter 3 for remove");
	   printf("\nEnter 4 for search");
	   printf("\nEnter 5 for exit:::=");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	       case 1:
	       add();
	       break;

	       case 2:
	       disp();
	       break;

	       case 3:
	       remo();
	       break;

	       case 4:
	       srch();
	       break;

	       case 5:
	       exit(0);

	       default:
	       printf("Invalid value ...!");
	   }
	   getch();
       }
}