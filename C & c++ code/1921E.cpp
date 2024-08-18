// Problem: E. Eat the Chip
// Contest: Codeforces - Codeforces Round 920 (Div. 3)
// URL: https://codeforces.com/contest/1921/problem/E
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
       ll n,m,a1,a2,b1,b2;
       cin>>n>>m>>a1>>a2>>b1>>b2;
       
       ll h=b1-a1-1;
       ll w=abs(b2-a2-1);
       ll s = h + w;
       
       if(h<1 || w/2>s)cout<<"Draw"<<endl;
       else if(h%2)cout<<"Bob"<<endl;
       else cout<<"Alice"<<endl;
       
    }

}