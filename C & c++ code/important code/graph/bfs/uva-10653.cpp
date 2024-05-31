//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)

#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key,find_by_order
   
using namespace std;

//ll m,n,c=0,k=0,a=0,b=0,temp;
int i,j;
int graph[1005][1005];
int level[1005][1005];
int vis[1005][1005];
int n,m;

void reset()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			level[i][j]=0;
			vis[i][j]=0;
			graph[i][j] = 0;
		}
		
	}
}

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>>movements={
	{0,-1},{0,1},
	{-1,0},{1,0},
};

int bfs(int sX , int sY, int pX, int pY)
{
	queue<pair<int,int>>q;
	q.push({sX,sY});
	vis[sX][sY]=1;
	
	while(!q.empty())
	{
		pair<int,int>v=q.front();
		int x=v.first, y=v.second;
		for(auto it: movements)
		{
			int cx=it.first+x;
			int cy=it.second+y;
		    if(!isvalid(cx,cy))continue;
		    if(graph[cx][cy]==1)continue;
		    
			if(!vis[cx][cy])
			{
				q.push({cx,cy});
				level[cx][cy]=level[x][y]+1;
				vis[cx][cy]=1; 
			}
		}
		q.pop();
		
	}
	return level[pX][pY];
}
int main()
{
	start() 
	while(1)
	{
		cin>>n>>m;
		reset();
	    if(n==0 && m==0) return 0;
	    int t;
	    cin>>t;
	    while(t--)
	    {
	    	int a,b;
	    	cin>>a>>b;
	        while(b--)
	        {
	        	int c;
	        	cin>>c;
	        	graph[a][c]=1;
	        }
	    }
	   int sx,sy,px,py;
	   cin>>sx>>sy>>px>>py;
	   cout<< bfs(sx,sy,px,py)<<endl;
		
	}
    

}