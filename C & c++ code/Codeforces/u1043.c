#include<stdio.h>
#include<math.h>
int main()
{
    float a, b , c, x, s;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
    x=a+b+c;
    printf("Perimetro = %.1f\n",x);
    }
    else{
        s=((a+b)*c);
        printf("Area = %.1f\n",s/2);
    }
    return 0;
}
