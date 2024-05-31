// Problem: D - Covid
// Contest: Virtual Judge - Practice Contest
// URL: https://vjudge.net/contest/544002#problem/D
// Memory Limit: 512 MB
// Time Limit: 3000 ms

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<=n;i++)
#define       j_for(a,n)       for(ll j=a;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key,find_by_order
   
using namespace std;

const ll  mx=10e5+9;
const ll  inf=10e17+9; 
ll n,m;

ll dist[mx];
vector<pair<ll,ll>>graph[mx];

void dijkstra(int s)
{
	for(ll i=0; i<=n; i++)dist[i]=inf;
	
	dist[s]=0;
	priority_queue < pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>> > pq;
	pq.push({0,s});
	
	while(!pq.empty())
	{
		ll u=pq.top().S;
		ll curD=pq.top().F;
		
		cout<<u<<" "<<curD<<endl;
		pq.pop();
		
		if(dist[u]<curD)continue;
		
		
		for(auto p: graph[u])
		{
			ll w=p.F;
			ll v=p.S;
			
			if(curD+w < dist[v])
			{
				 dist[v]=curD+w;
				 pq.push({dist[v],v});
			}
		}
	}
}

int main()
{
   cin>>n>>m;
   for(ll i=0; i<n; i++)
   {
   	 ll x,y,w;
   	 cin>>x>>y>>w;
   	 graph[x].pb({y,w});
   	 graph[y].pb({x,w});
   		 
   }
   
   ll xx;
   cin>>xx; 
   dijkstra (xx);

   for ( int i = 0; i <n; i++ ) cout << dist[i] << " ";
   cout << endl;
   return 0;

}
