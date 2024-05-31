#include<stdio.h>
int main()
{
    int T, cheak, a, i, m, n, j, sum, temp;
    scanf("%d",&T);
    while(T--){
    scanf("%d%d",&m,&n);
    if(m>n){
        temp=m;
         m=n;
         n=temp;
    }
    sum=0;
    for(j=m; j<=n; j++){
            a=j;
    cheak=1;
    if(a==1)
        cheak=0;
    for(i=2; i<a; i++){
        if(a%i==0)
            cheak=0;
    }
    if(cheak==1){
            sum=sum+a;
    }

    }
    printf("prime sum=%d\n",sum);
   }
}

