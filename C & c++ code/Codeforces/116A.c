#include<stdio.h>
int main()
{
    int a,b,i,n,p=0,x;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d%d",&a,&b);
        x=(b-a);
        if(x<=0){
            continue;
        }
        p=p+x;
    }
    printf("%d",p);

}
