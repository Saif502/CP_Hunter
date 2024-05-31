#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,j;
    cin>>T;
    while(T--)
    {
        int n, s=0,ans=999999999;
        cin>>n;
        int x[n];
        for(i=0; i<n; i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);

        for(i=0; i<n-1; i++)
        {

             s=x[i+1]-x[i];

             ans=min(ans,s);
        }
        cout<<ans<<" ";


    }
}
