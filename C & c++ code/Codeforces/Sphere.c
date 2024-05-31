#include<stdio.h>
#define P 3.14159
int main()
{
    double R,v;
    scanf("%lf",&R);
    v=(4*P*R*R*R)/3;
    printf("VOLUME = %.3lf\n",v);
    return 0;
}
