// Problem: I. Palindrome Pairs
// Contest: Codeforces - Bubble Cup 11 - Finals [Online Mirror, Div. 1]
// URL: https://codeforces.com/problemset/problem/1045/I
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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

bitset<30>bit;
map<ll,ll>mp;

int main()
{
    start() 
    
    ll n,ans=0;
    cin>>n;
    
    for(ll i=1; i<=n; i++)
    {
    	string s;
    	cin>>s;
    	ll parity=0;
    	
    	for(ll j=0; j<s.size(); j++)
    	{
    		parity^=(1<<s[j]-'a');
    	
    	}
       ans+=mp[parity];   	
       mp[parity]++;
       
       for(ll j=0; j<26; j++)
       {
       	ll x = parity;
       	x ^= (1<<j);
       	ans+=mp[x];
       }
       
       
    }
    cout<<ans<<endl;
    
    

}