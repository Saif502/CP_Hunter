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
#define nd cout<<endl
#define out(n) cout<<n<<endl
#define xx " "
using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;

int main()
{
   int a[10];
   vector<int>v;
   //vector<int>v(5); out: 0 0 0 0 0
   //vector<int>v(5,4); out: 4 4 4 4 4
   cin>>n;
   i_for(n)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }
   cout<<v.size()<<endl;
   i_for(v.size())
   {
       cout<<v[i]<<xx;
   }
}

