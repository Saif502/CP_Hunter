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
#define ed cout<<endl
#define out(n) cout<<n<<endl

using namespace std;

ll m,n,c=0,k=0,temp,sum;
ll i,j;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int x[n];
        sum=0;
        i_for(n)
        {
           cin>>x[i];
           sum+=x[i];
        }
        if(m>sum) cout<<sum<<endl;
        else
            cout<<m<<endl;


    }


}


