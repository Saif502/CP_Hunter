#include<stdio.h>
int main()
{
    int a,x,y,z,m;
    scanf("%d",&a);
    x=a/365;
    y=a%365;
    z=y/30;
    m=y%30;
    printf("%d ano(s)\n",x);
    printf("%d mes(es)\n",z);
    printf("%d dia(s)\n",m);
    return 0;
}

