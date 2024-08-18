// Problem: A. Soccer
// Contest: Codeforces - Codeforces Round 955 (Div. 2, with prizes from NEAR!)
// URL: https://codeforces.com/contest/1982/problem/0
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
      ll x1,x2,y1,y2;
      cin>>x1>>x2>>y1>>y2;
      if(y1>y2)
      {
      	if(x1>x2 && y1>x2)yes;
      	else no;
      }
      else
      {
      	if(x2>x1 && y2>x1)yes;
      	else no;
      }
    }

}