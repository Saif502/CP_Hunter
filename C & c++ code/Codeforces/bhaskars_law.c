#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,m,n;
    scanf("%f%f%f",&a,&b,&c);
    x=(b*b)-(4*a*c);
    if(x>0 && a!=0)
    {
       m=(-b + sqrt(x))/(2*a) ;
       n=(-b - sqrt(x))/(2*a) ;
       printf("R1 = %.5f\n",m);
       printf("R2 = %.5f\n",n);
    }
    else
        printf("Impossivel calcular\n");
}
