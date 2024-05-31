#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d%d",&a,&b);
    t=a;
    for(i=1; i<=b; i++){
        if(t%10==0){
            t=t/10;
        }
        else{
            t=t-1;
        }
    }

    printf("%d",t);
}
