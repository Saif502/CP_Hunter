
#include <stdio.h>

int main()
{
   long long m, n, a, p, q;
    scanf("%lld%lld%lld",&m,&n,&a);

    if(m%a==0){
        p=m/a;
    }
    else{
        p=(m/a)+1;
    }

    if(n%a==0){
       q=n/a;
    }
    else{
        q=(n/a)+1;
    }

    printf("%lld\n",p*q);

    return 0;
}

