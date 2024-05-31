#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[2000];
    int n,a,i,s=0;
    scanf("%d%d",&n,&a);
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++){
        if(x[i]%a==0){
            s=s+x[i]/a;

        }
        else{
            s=s+(x[i]/a+1);
        }

    }
    printf("%d",s);

}
