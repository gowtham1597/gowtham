#include<stdio.h>
void main()
{
       int a,j,sum=0;
       clrscr();
       printf("Enter the Number : ");
       scanf("%d",&a);
       for(j=1;j<=a;j++)
           {
              printf("%d ",j);
              sum=sum+j;
           }
              printf("\nSum of  %d is : %d ",a,sum);
              getch();
}

