// Problem: D. Soldier and Number Game
// Contest: Codeforces - Codeforces Round 304 (Div. 2)
// URL: https://codeforces.com/contest/546/problem/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
const int N=5e6+5;
int spf[N];
ll mp[N];

int main()
{
    start() 
    
    for(int i=2; i<N; i++)
    {
    	spf[i]=i;
    }
    for(int i=2; i<N; i++)
    {
    	for(int j=i; j<N; j+=i)
    	{
    		spf[j]=min(spf[j],i);
    	}
    }
    mp[1]=1;
    ll sum=1;
    for(int i=2; i<N; i++)
    {
    	vector<int>v;
    	ll c=0,n=i;
    	while(n>1)
    	{
    		n/=spf[n];
    		c++;
    	}
    	sum+=c;
    	mp[i]=sum;
    	
    }
    
    ll t;
    cin>>t;
    while(t--)
    {
      ll a,b;
      cin>>a>>b;
      cout<<mp[a]-mp[b]<<endl;
    }

}