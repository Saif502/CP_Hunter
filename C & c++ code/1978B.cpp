// Problem: B. New Bakery
// Contest: Codeforces - Codeforces Round 953 (Div. 2)
// URL: https://codeforces.com/contest/1978/problem/B
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
       ll n,a,b;
       cin>>n>>a>>b;
       if(a>=b)
       {
       	cout<<n*a<<endl;
       }
       else
       {
       	 
       	 ll k = n-(b-a), p=a;
       	 if(k<0) p = (b-n), k=0;
       	 ll z=(b*(b+1))/2;
       	 ll z1=(p*(p+1))/2;
    
       	 cout<<(z-z1)+(k*a)<<endl;
       }
    }

}