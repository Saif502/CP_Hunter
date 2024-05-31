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

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int main()
{

     cin>>n;
     ll x[n];
     for_i(n) cin>>x[i];

     for_i(n)
     {
         if(i%3==1) c+=x[i];
         else if(i%3==2) k+=x[i];
         else a+=x[i];

     }
     MAX=max(max(c,k),a);
     if(MAX==c) cout<<"chest"<<endl;
     else  if(MAX==k) cout<<"biceps"<<endl;
     else cout<<"back"<<endl;


}

