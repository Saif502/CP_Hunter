#include<stdio.h>
int main()
{
    double a,b;
    char op;


    printf("Enter the operend (+, -, *, /) : ");
    scanf("%c",&op);

    printf("Enter the two number: ");
    scanf("%lf%lf",&a,&b);

    switch(op)
    {

  case '+':
    {
        printf("%lf + %lf = %lf\n",a,b,a+b);
        break;
    }
  case '-':
    {
        printf("%lf - %lf = %lf\n",a,b,a-b);
        break;
    }

  case '*':
    {
        printf("%lf * %lf = %lf\n",a,b,a*b);
        break;
    }
  case '/':
    {
        printf("%lf / %lf = %lf\n",a,b,a/b);
        break;
    }
  default:
    printf("Not valid\n");

    }
}
