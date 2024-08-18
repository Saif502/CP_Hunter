// Problem: B. Tree Tag
// Contest: Codeforces - Codeforces Round 668 (Div. 1)
// URL: https://codeforces.com/contest/1404/problem/B
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
#define         F                first
#define         S                second
#define         mp               make_pair
#define         MOD              1000000007
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
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;

ll MAX=0,MIN=999999999,sum=0;
ll i,j,mx,node;
vector<int>g[100005];
int depth[1000005];

// no need vis array for dfs tree cause it has no loop and pass the parents
//int level[1000050];

void dfs(int vertex, int par=0)
{
	for(int child: g[vertex])
	{
		//cout<<"par "<<vertex<<" "<<"child "<<child<<endl;
		if(child==par)continue;
		depth[child]=depth[vertex]+1;

		if(mx<depth[child]){
			node=child;
			mx=depth[child];			
		}
		dfs(child, vertex);	
		//height[vertex]=max(height[vertex],height[child]+1);
	}
	
}

void reset()
{
	for(i=0; i<100005; i++)
	{
		depth[i]=0;
		g[i].clear();	
	}
}

int main()
{
	start() 
    ll t;
    cin>>t;
    while(t--)
    {
    	int n,a,b,da,db;
	    cin>>n>>a>>b>>da>>db;
	    for(i=0; i<=n; i++)
		{
			depth[i]=0;
			g[i].clear();	
		}
	    for(i=0; i<n-1; i++)
	    {
	    	int x,y;
	    	cin>>x>>y;
	    	g[x].pb(y);
	    	g[y].pb(x);
	    }
	    mx=-1,node=a;
	    depth[node]=0;
	    dfs(node);
	    ll distance= depth[b];
	    mx=-1;
	    depth[node]=0;
	    dfs(node);
	    int diam=mx;
	    //cout<<diam<<" "<<distance<<endl;
	    if(2*da >= min(diam, db) || distance <= da) cout<<"Alice"<<endl;
	    else cout<<"Bob"<<endl;
	    
    }	
    
 
}