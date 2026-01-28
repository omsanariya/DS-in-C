#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
      int n,i,*ptr;
      clrscr();
      printf("Enter array you want=");
      scanf("%d",&n);
      ptr = (int*)calloc(n,sizeof(int));
      for(i=0;i<n;i++)
      {
	 printf("Enter value =");
	 scanf("%d",ptr+i);
      }
      for(i=0;i<n;i++)
      {
	      printf("\n%d",*(ptr + i));
      }
      getch();
}