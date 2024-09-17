// Problem: B - Hit the Light Switches
// Contest: Virtual Judge - Practice Sessions - Day 03
// URL: https://vjudge.net/contest/650053?fbclid=IwY2xjawEw_C9leHRuA2FlbQIxMAABHXXKWbT3c0JpqWSof47I2ASH5jczqpaDtUdeZX0bk1xZz8vcMakS2-MgJA_aem_swwTcYW2KBTVg3fJyQKeCw#problem/B
// Memory Limit: 64 MB
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

const ll N = 1e5+7;

vector<ll> adjList[N], revAdjList[N], order, component;
ll n, m, visited[N];

void reset()
{
	for(ll i=0; i<N; i++)
	{	
	   visited[i]=0;
	   adjList[i].clear();
	   revAdjList[i].clear();
	}
	order.clear();
	component.clear();
	
}

void dfs1(ll currNode) {
    if (visited[currNode] == 1) return;

    visited[currNode]++;
    for (auto &u : adjList[currNode]) dfs1(u);
    order.push_back(currNode);
}

void dfs2(ll currNode) {
    if (visited[currNode] == 2) return;

    visited[currNode]++;
    component.push_back(currNode);
    for (auto &u : revAdjList[currNode]) dfs2(u);
}

void scc() {
    for (ll i = 1; i <= n; i++) dfs1(i);
    // for(auto it: order)cout<<it<<" ";
	    // nl;
    reverse(order.begin(), order.end());

    for (auto &u : order) {
        if (visited[u] == 2) continue; 
        dfs2(u);
        for(auto it: component)cout<<it<<" ";
	    nl;
        component.clear();
    }
    nl;
}
int main()
{
    start() 
    
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	reset();
    	cin >> n >> m;
	    while (m--) {
	        ll u, v; cin >> u >> v;
	        if (u != v) {
	            adjList[u].push_back(v);
	            revAdjList[v].push_back(u);
	        }
	    }
	    scc();
    }
    

}