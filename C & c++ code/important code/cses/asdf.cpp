// Problem: Weird Algorithm
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1068
// Memory Limit: 512 MB
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
  
    	ll n;
    	cin>>n;
    	ll z=(n*(n+1))/2;
        if(z%2)cout<<"NO"<<endl;
        else
        {
        	z/=2;
        	cout<<"YES"<<endl;
        	vector<ll>x,y;
        	ll sum=0;
        	for(ll i=1; i<=n; i++)
        	{
        		sum+=x[i];
        		if(sum<=z)x.pb(i);
        		else{
        			sum-=x[i];
        			x.pb()
        		}
        	}
        }

}