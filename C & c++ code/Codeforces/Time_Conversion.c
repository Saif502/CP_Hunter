#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d",&a);
    x=a/3600;
    y=a%3600;
    z=a%60;
    printf("%d:%d:%d\n",x,y/60,z);
    return 0;
}
