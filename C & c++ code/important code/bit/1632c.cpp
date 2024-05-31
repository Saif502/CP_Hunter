// Problem: C. Strange Test
// Contest: Codeforces - Codeforces Round #769 (Div. 2)
// URL: https://codeforces.com/contest/1632/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<n;i++)
#define       j_for(a,n)       for(ll j=a;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
       ll a,b;
       cin>>a>>b;
       
       ll mn=b-a;
       for(ll i = a; i <= b; i++)
       {
       	  ll left=i-a;
       	  ll c=b;
       	  bitset<25>xx(i);
       	  bitset<25>ss(b);
       	  for(ll j=25; j>=0; j--)
       	  {
       	  	//cout<<xx[j]<<" ";
       	  	if(xx[j]==1 && ss[j]==0) c+=(1<<j);
       	  	if(xx[j]==0 && ss[j]==1)
       	  	{
       	  		if(c-(1<<j)>=b)c-=(1<<j);
       	  	}
       	  }
       	  ll right=c-b;
       	  mn=min(mn,(left+right)+1);
       }
       cout<<mn<<endl;
    }

}