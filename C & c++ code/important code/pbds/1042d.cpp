// Problem: D. Petya and Array
// Contest: Codeforces - Codeforces Round 510 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1042/D
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
 
 
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
 
#define     ordered_set        tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
//order_of_key,find_by_order
 
int main()
{
    start()
 
    ll n,t;
    cin>>n>>t;
 
    ordered_set ps;
 
    ll x[n+5];
    i_for(1,n+1) cin >> x[i];
 
 
    ll sum_arr[n+5];
    sum_arr[0]=0;
 
    i_for(1,n+1)sum_arr[i]=sum_arr[i-1]+x[i];
 
    ll c=0;
    ps.insert(sum_arr[0]);
    for(ll i=1; i<=n; i++)
     {
 
         c+=i-ps.order_of_key(sum_arr[i]-t+1);
         ps.insert(sum_arr[i]);
         //cout<<c<<endl;
     }
 
    cout<<c<<endl;
 
 
 
}