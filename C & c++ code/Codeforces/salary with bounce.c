#include<stdio.h>
main()
{
    char name[10000];
    double a,b,s;
    scanf("%s%lf%lf",&name,&a,&b);
    s=a+(0.15*b);
    printf("TOTAL = R$ %0.2lf\n",s);
}
