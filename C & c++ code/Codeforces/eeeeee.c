#include<stdio.h>
int main()
{
   int i,num;
   scanf("%d",&num);
   do{
        i=2;
    num%i!=0;
    printf("p");
   }
   while(i<=num/2);{
   i++;
   }
   return 0;
}
