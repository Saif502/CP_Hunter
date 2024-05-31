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

int i,j;
vector<int>graph[50000],weight[50000];
bool vis[50000];
int max_dis[50000];
int level[50000];

void clr(int n)
{
    for( int i = 0 ; i < n ; i++ )
    {
        vis[i] = 0;
        max_dis[i] = 0;
    }
}
void bfs(int source)
{
	queue<int>q;
	q.push(source);
	vis[source]=1;
	level[source]=0;
	max_dis[source]=0;
	
	while(!q.empty())
	{
		int p=q.front();
		for(ll i=0; i<graph[p].size(); i++)
		{
			ll it=graph[p][i];
			if(!vis[it])
			{
				vis[it]=1;
				q.push(it);
				level[it]=level[it]+1;
				max_dis[it]=max_dis[p]+weight[p][i];
				
			}
		}
		q.pop();
	}
}
int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	ll n;
	    cin>>n;
        ll node=0,mx=0;
	    for(i = 0 ; i < n ; i++ )
	    {
	        graph[i].clear();
	        weight[i].clear();
	    }
	    
	    for(i=1; i<n; i++)
	    {
	    	ll u,v,w;
	    	cin>>u>>v>>w;
	    	graph[u].pb(v);
	    	graph[v].pb(u);
	    	weight[u].pb(w);
	    	weight[v].pb(w);
	    }
	    bfs(0);
	    
	    for(i=0; i<n; i++)
	    {
	    	if(max_dis[i]>mx)mx=max_dis[i],node=i;
	    }
	    
	    clr(n);
	    bfs(node);
	    for(i=0; i<n; i++)
	    {
	    	if(max_dis[i]>=mx)mx=max_dis[i];
	    }
	    clr(n);
	    cout<<"Case "<<tt++<<":"<<mx<<endl;	
    }

}