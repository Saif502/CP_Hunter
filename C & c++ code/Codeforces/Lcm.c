#include<stdio.h>
int main()
{
    int i, num1,num2,max,lmc;
    scanf("%d%d",&num1,&num2);
     if(num1>num2)
        max=num1;
     else
        max=num2;

     i=max;
     while(1){
        if(i%num1==0 && i%num2==0)
        {
            lmc=i;
            break ;
        }
        i=i+max;
     }
     printf("%d\n",lmc);

}
