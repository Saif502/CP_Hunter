// Problem: Find pairs
// Contest: HackerEarth - December Circuits '23
// URL: https://www.hackerearth.com/challenges/competitive/december-circuits-23/algorithm/find-pairs-9-98236f91/
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
    
    ll n;
    cin>>n;
    ll x[n];
    ll c=0;
    for(ll i=0; i<n; i++)
    {
    	cin>>x[i];
    	
    }
    unordered_map<ll,ll> fr;

    ll result = 0;
    for (ll i = 0; i < n; ++i) {
        ll diff = x[i] - i;
        result += fr[diff];
        fr[diff]++;
    }
    
    cout<<result*2<<endl;

}