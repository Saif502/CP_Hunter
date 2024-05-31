#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,c=0,n;
    scanf("%d",&n);
    int x[n];

    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++){
        if(x[i]!=x[i+1]){
            c++;
        }
    }
    printf("%d\n",c);

}
