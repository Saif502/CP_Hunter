// Problem: B. Collatz Conjecture
// Contest: Codeforces - Codeforces Round 955 (Div. 2, with prizes from NEAR!)
// URL: https://codeforces.com/contest/1982/problem/B
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
      ll x, y, k;
      cin >> x>> y >> k;
      
      while(k){
      	ll d = min(k, y - x % y);
      	k -= d;
      	x += d;
      	while(x % y == 0) x /= y;
      	if(x == 1) k = k % (y);
      	cout << x << ' '  << d << '\n';
      }
      cout << x << '\n';
    }

}