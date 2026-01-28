#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
    int i,*ptr,n1,n2;
    clrscr();
    printf("Enter value of time of loop :");
    scanf("%d",&n1);
    ptr =(int*)malloc(n1*sizeof(int));
    for(i=0;i<n1;i++)
    {
     printf("Enter value %d :",i+1);
     scanf("%d",ptr + i);
    }
    for(i=0;i<n1;i++)
    {
     printf("\n\t: %d",*(ptr + i));
    }
    printf("\n\nEnter value of updated value :");
    scanf("%d",&n2);
    ptr=(int*)realloc(ptr,n2*sizeof(int));
      for(i=n1;i<n2;i++)
    {
     printf("Enter value %d :",i+1);
     scanf("%d",ptr + i);
    }
    for(i=n1;i<n2;i++)
    {
     printf("\n\t: %d",*(ptr + i));
    }
    getch();
}