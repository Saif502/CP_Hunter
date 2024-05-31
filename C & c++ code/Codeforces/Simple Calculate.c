#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,x;
    scanf("%d%d%f\n",&a,&b,&e);
    scanf("%d%d%f",&c,&d,&f);
    x=(b*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2f\n",x);
    return 0;
}
