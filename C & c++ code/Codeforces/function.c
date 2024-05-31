#include<stdio.h>
int get_sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int say_hi()
{
    printf("Hello\n");
}
int main()
{
    printf("Main start\n");
    say_hi();
    int result=get_sum(20,30);
    printf("The sum is :%d",result);
    return 0;
}
