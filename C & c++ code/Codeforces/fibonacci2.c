#include <stdio.h>
int main()
{
   int n, count=0, f=0, e=1, fib;

   scanf("%d",&n);

   while(count<n){
       if(count<=1){
           fib=count;

       }
       else{
           fib=f+e;
           f=e;
           e=fib;
       }
       printf("%d ",fib);
       count++;
   }

    return 0;
}
