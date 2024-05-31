// Problem: Monk and Multiplication
// Contest: HackerEarth - Data Structures - Trees - Heaps/Priority Queues
// URL: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;

int main()
{
    cin>>n;
    ll x[n];
    i_for(n)cin>>x[i];
    priority_queue<int,vector<int>,greater<int>>q;
    priority_queue<int>p;
    i_for(n)
    {
        q.push(x[i]);
        p.push(x[i]);
        cout<<q.top()<<" ";
        cout<<p.top()<<endl;
        
    }

}