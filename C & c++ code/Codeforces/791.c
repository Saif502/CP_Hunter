#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=0;
    while(a<=b)
    {

       a=a*3;
       b=b*2;

       ++i;

    }
       printf("%d\n",i);

     return 0;

}
