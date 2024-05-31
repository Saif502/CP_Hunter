// Problem: E. Binary Deque
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define         ll             long long int
#define         ld               long double
#define         F                first
#define         S                second
#define         mp               make_pair
#define         MOD              1000000007
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       for_i(n)         for(ll i=1;i<=n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       for_j(n)         for(ll j=1;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       Srt(a)           sort(all(a))
#define       rev(a)           reverse(all(a))
#define       max3(a,b,c)      max(a,max(b,c))
#define       min3(a,b,c)      min(a,min(b,c))
#define       pb               push_back
#define       nl               cout<<endl
#define       lrg(x,y)         ((x+y-1)/y)
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)

#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,d=0,MIN=999999999,sum=0;
ll i,j;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      sum=0,a=0,b=0;
      vector<ll>v;
      //v.pb(-1);
      i_for(n)
      {
      	ll x;
      	cin>>x;
      	if(x)v.pb(i+1);
      }
      v.pb(n);
      if(v.size()-2<k)cout<<"-1"<<endl;
      else
      {
      	a=v.size();
      	sum=n;
      	i
      }
      
    }

}
p.push_back(n);
   // cout<<"--"<<p.size()<<endl;
    int cnt = p.size() - 2;
    if (cnt < s){
      cout << -1 << endl;
    } else {
      int cnt = p.size();
      int ans = n;
      for (int j = 0; j < cnt - s - 1; j++){
        ans = min(ans, n - (p[j + s + 1] - p[j]) + 1);
      }
      cout << ans << endl;
    }