// Problem: D. Decrease the Sum of Digits
// Contest: Codeforces - Codeforces Round 667 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1409/D
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
       ll n,s;
       cin>>n>>s;
       
       ll sum=0,xx=n;
       
       for(ll i=1;; i*=10)
       {
	      ll x=n/i, p=(i!=1);
	       	 
	      while(x)
	      {
	       	 p+=(x%10);
	       	 x/=10;
	      }
	      
	     // cout<<p<<endl;
	      if(p<=s)
	      {
	      	cout<<(n/i + (i!=1))*i-n<<endl;
	      	break;
	      }
       	 
       }
       
       
      
    }

}