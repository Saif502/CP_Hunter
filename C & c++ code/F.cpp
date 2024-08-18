// Problem: F. Magical Indices
// Contest: Codeforces - PSTU-BU Inter University Online Programming Contest, July 2024
// URL: https://codeforces.com/gym/534044/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define         ll               int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<n;i++)
#define       j_for(a,n)       for(ll j=a;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<"\n"
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    start() 
    ll t,tt=1;
   	scanf("%d",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       ll x[n];
       ll p[n],q[n];
       for(ll i=0; i<n; i++)
       {
       	  scanf("%d",&x[i]);
       	 
       }
       ll mx=0,mn=INT_MAX;
       for(ll i=0; i<n; i++)
       {
       	 mx=max(mx,x[i]);
       	 p[i]=mx;
       	 
       }
       for(ll i=n-1; i>=0; i--)
       {
       	 mn =min(mn,x[i]);
       	 q[i]=mn;
       	 
       }
       ll ans=0;
       for(ll i=1; i<n-1; i++)
       {
       	 if(p[i]==q[i])ans++;
       	
       }
      
       printf("%d\n",ans);
       
      
       
    }

}