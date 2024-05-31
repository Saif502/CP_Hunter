#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,n;
    cin>>T;
    while(T--){
        cin>>n;
        int x[n],i,j,m=0;
        for(i=0;i<n;i++) cin>>x[i];
        sort(x,x+n);
        int c=0;
        for(i=n-2;i>=0;i--)
       {
                if(x[n-1]>x[i]){
                    c++;

                }
            }
        cout<<c<<endl;
    }
    return 0;
}
