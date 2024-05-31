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
   pair<int,string> p;
   p={2,"xyz"};
   pair<int, string> &p1=p;
   p1.first=3;
   cout<<p.first<<xx<<p.second<<endl;
   pair<int,int> p_array[3];
   p_array[0]={1,3};
   p_array[1]={2,3};
   p_array[2]={3,4};
   swap(p_array[0],p_array[2]);
   i_for(3)
   {
      cout<<p_array[i].first<<xx<<p_array[i].second<<endl;
   }
}

