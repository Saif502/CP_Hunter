#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<string.h>
#define ll long long int

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

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,sum=0;
ll i,j;
int main()
{

     cin>>n;
     ll x[n+1],p[n];
     c=0,k=0,a=0;
     ll MIN=999999999;
     for(i=1;i<=n;i++)
     {
         cin>>x[i];
     }
     c=abs(x[n]-x[1]);
      k=n;
      a=1;
      for(i=2;i<=n;i++)
      {
          if(abs(x[i]-x[i-1])<c){
            c=abs(x[i]-x[i-1]);
            k=i;
            a=i-1;
          }
      }
     cout<<k<<" "<<a<<endl;



}
