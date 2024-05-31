#include<stdio.h>
int main()
{
    int num,i=1;
    printf("enter the number=");
    scanf("%d",&num);
    abhi:
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
        if(i<=10)
        goto abhi;
}
