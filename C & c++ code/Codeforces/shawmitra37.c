#include<stdio.h>
#include<string.h>


int main()
{
   int emp_no[100000];
   int c=0,i;
   for (i=0;i<100000;i++)
   {
       scanf ("%d",emp_no[i]);

   if (emp_no[i]==99999)

       break;
c++;
   }

   printf ("total employee number = %d",c);


}
