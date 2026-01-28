#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int tos=-1,x[size];
void add()
{
     if(tos<size - 1)
     {
	tos++;
	printf("Enter value :");
	scanf("%d",&x[tos]);
	printf("value added succes");
     }
     else
     {
       printf("stack is full");
     }
}
void disp()
{
    if(tos==-1)
    {
     printf("stack is empty");
    }
    else
    {
     int i;
     for(i=0;i<=tos;i++)
     {
       printf("\nvalue of place %d) is %d",i+1,x[i]);
     }
    }
}
void remove()
{
  tos--;
   printf("value removed succes fully");
}
void search()
{
      int i,srch,flag=0;
      printf("Enter value you want to search :");
      scanf("%d",&srch);
      for(i=0;i<=tos;i++)
      {
	   printf("\n\t%d):%d",i+1,x[i]);
	   if(srch==x[i])
	   {
	    printf("<===value %d found here ",srch);
	    flag=1;
	   }
      }
      if(flag==0)
      {
      printf("Value not found");
      }
}
void main ()
{
	 int ch;
	 while(1)
	 {
	    clrscr();
	    printf("\nEnter 1 for add ");
	    printf("\nEnter 2 for display ");
	    printf("\nEnter 3 for remove ");
	    printf("\nEnter 4 for search ");
	    printf("\nEnter 5 for exit ");
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
		      remove();
		      break;
		case 4:
		      search();
		      break;
		case 5:
		      exit(0);
		default:
		     printf("Invalide choice");
	    }
	    getch();
	 }
}