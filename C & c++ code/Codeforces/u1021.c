#include<stdio.h>
int main()
{
    double a;
    int b,n;
    scanf("%lf",&a);
    n=a*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/10000);
    b=(n%10000);
    printf("%d nota(s) de R$ 50.00\n",b/5000);
    b=(b%5000);
    printf("%d nota(s) de R$ 20.00\n",b/2000);
    b=(b%2000);
    printf("%d nota(s) de R$ 10.00\n",b/1000);
    b=(b%1000);
    printf("%d nota(s) de R$ 5.00\n",b/500);
    b=(b%500);
    printf("%d nota(s) de R$ 2.00\n",b/200);

    printf("MOEDAS:\n");

    b=(b%200);
    printf("%d moeda(s) de R$ 1.00\n",b/100);
    b=(b%100);
    printf("%d moeda(s) de R$ 0.50\n",b/50);
    b=(b%50);
    printf("%d moeda(s) de R$ 0.25\n",b/25);
    b=(b%25);
    printf("%d moeda(s) de R$ 0.10\n",b/10);
    b=(b%10);
    printf("%d moeda(s) de R$ 0.05\n",b/5);
    b=(b%5);
    printf("%d moeda(s) de R$ 0.01\n",b);


    return 0;
}

