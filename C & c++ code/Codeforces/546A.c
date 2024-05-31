#include<stdio.h>
int main()
{
    int i, j, k, m, sum=0,x;
    scanf("%d%d%d",&i,&j,&k);

    for(m=i; m<=k*i; m+=i){

         sum=sum+m;
    }
     x=sum-j;
     if(x>0)
    {
    printf("%d\n",x);
    }
    else{
        printf("0\n");
    }

    return 0;
}
