#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,s,A;
    printf("Enter Three Number=");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        s=(a+b+c)/2;
        A=sqrt (s*(s-a)*(s-b)*(s-c));
        printf("%f",A);
    }
    else
    {
        printf("triangle is not possible");
    }
}
