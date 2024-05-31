#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,x;
    scanf("%lld",&n);
    if(n%2==0){
        x=n/2;
    }
    if(n%2==1){
        x=(n-1)/2-n;
    }
    printf("%lld\n",x);

    return 0;
}
/*
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,x,i,s=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++){
    x=pow((-1),i);
    s=s+(x*i);
    }
    printf("%lld",s);*/
