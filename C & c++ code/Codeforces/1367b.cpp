#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<string.h>
#define ll long long int
#define i_for(n) for(ll i=0;i<n;i++)
#define ri_for(n) for(ll i=n-1;i>=0;i--)
#define for_i(n) for(ll i=1;i<=n;i++)
#define j_for(n) for(ll j=0;j<n;j++)
#define rj_for(n) for(ll j=n-1;j>=0;j--)
#define for_j(n) for(ll j=1;j<=n;j++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define end cout<<endl
#define out(n) cout<<n<<endl

using namespace std;
int main()
{
    int i,n,c=0,t,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0,k=0;
        int x[n+1];
        for(i=0; i<n; i++)
        {
            cin>>x[i];

        }
        for(i=0; i<n; i++)
        {
            if(i%2==0&&x[i]%2!=0)
            {
                c++;
            }
            if(i%2!=0&&x[i]%2==0)
            {
                 k++;
            }
        }
        if(c==k) cout<<c<<endl;
        else cout<<"-1"<<endl;

    }
}

