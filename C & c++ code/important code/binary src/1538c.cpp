// Problem: C. Number of Pairs
// Contest: Codeforces - Codeforces Round 725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/C
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

int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
       ll n, l, r;
       cin>>n>>l>>r;
       
       ll x[n];
       
       i_for(0,n)cin>>x[i];
       sort(x,x+n);
       ll  sum=0;
       for(ll i=0; i<n; i++)
       {
       	 ll p1=abs(l-x[i]);
       	 ll p2=abs(r-x[i]);
       	 ll z1=upper_bound(x+i+1,x+n,p2)-x;
       	 ll z2=lower_bound(x+i+1,x+n,p1)-x;
       	 sum+=(z1-z2);
       	 //cout<<sum<<endl;
       }
       
       cout<<sum<<endl;
      
    }

}