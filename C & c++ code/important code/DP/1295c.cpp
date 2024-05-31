// Problem: C. Obtain The String
// Contest: Codeforces - Educational Codeforces Round 81 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1295/C
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
int letter=26;

int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
      string a,b;
      cin>>a>>b;
      vector<ll>location[letter];
      for(ll i=0; i<a.size(); i++)location[a[i]-'a'].pb(i);
      
      ll position=-1,ans=1;
      
      for(ll i=0; i<b.size(); i++)
      {
      	if(location[b[i]-'a'].size()==0)
      	{
      		ans=-1;
      		break;
      	}
      	
      	auto it = upper_bound(all(location[b[i]-'a']),position);
      	
      	if(it==location[b[i]-'a'].end())
      	{
      		ans++;
      		it=location[b[i]-'a'].begin();
      	}
      	position=*it;
      }
      cout<<ans<<endl;
    }

}