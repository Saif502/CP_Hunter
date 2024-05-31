#include<stdio.h>
int main()
{
   int x;
   x=10;
    if (x==10)
    {
       int x;
        x=99;
        printf("inner x=%d\n",x);

   }
   printf("outter x=%d\n",x);

}
