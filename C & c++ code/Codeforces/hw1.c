#include<stdio.h>
int _xor(int a, int b);
int main(void)
{


    printf("%d\n", _xor(1,0));
    printf("%d\n",_xor(1,1));
      printf("%d\n",_xor(0,1));
      printf("%d\n",_xor(0,0));
    return 0;

}
int _xor(int a, int b)
{
    return(a || b)&& ! (a && b);
}
