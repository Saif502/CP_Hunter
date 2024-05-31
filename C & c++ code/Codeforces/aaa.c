#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
        printf("the largest number is=%d",a);
    else if(b>a&&b>c)
        printf("the largest number is=%d",b);
    else if(c>a&&c>b)
        printf("the largest number is=%d",c);
        else
            printf("all are equal");
        return 0;
}
