#include<stdio.h>
float add(float x, float y)
{

    return x+y;
}
float sub(float x, float y)
{

    return x-y;
}
float mul(float x, float y)
{

    return x*y;
}
float div(float x, float y)
{

    return x/y;
}
int main()
{
    float x,y;
  printf("Enter the value of x & y :");
  scanf("%f%f",&x,&y);

  float a_result=add(x,y);

  float s_result=sub(x,y);

  float m_result=mul(x,y);

  float d_result=div(x,y);

  printf(" add=%f\n sub=%f\n mul=%f\n div=%f\n",a_result,s_result,m_result,d_result) ;
  return 0;
}
