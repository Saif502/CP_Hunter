#include<stdio.h>
int main()
{
    int a[3];
    a[0]=1;
    a[1]=2;
    a[2]=4;
    int x=a[0]+a[2];
    printf("%d\n",x);
    a[2]=30;
    x=a[0]+a[2];
    printf("%d\n",x);
}
