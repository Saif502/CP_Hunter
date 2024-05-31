#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[100];
    int i,n,m,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
     for(j=1; j<=n; j++)
        {
       for(i=0; i<n; i++){
        if(x[i]==j){
            printf("%d ",i+1);
        }
       }
    }

}
