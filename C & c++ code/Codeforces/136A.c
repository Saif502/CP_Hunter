#include <bits/stdc++. h>
int main()
{
    int x[100];
    int i,n,m;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
    m=x[0];
    while(n!=0){
        for(i=0; i<n; i++){
            if(x[i]>m){
                m=x[i];
            }
            printf("%d ",i+1);
        }
        m++;
    }
}
