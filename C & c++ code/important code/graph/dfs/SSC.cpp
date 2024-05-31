#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define       ll             long long int
#define       F                first
#define       S                second
#define       mp               make_pair
#define       MOD              1000000007
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       snf(a)           scanf("%d",&a)
#define       snf(a,b)         scanf("%d%d",&a,&b)
#define       pnf(a)           printf("%d",a);
#define       white                0
#define       black                1
#define       red                  2

using namespace std;

//ll MAX=0,MIN=999999999,sum=0;
ll i,j;
vector<int>g[1000];
vector<int>rev_g[1005];

bool vis[1000050];
vector<int>order;
vector<int>ans;


void dfs(int vertex)
{
	//cout<<vertex<<endl;
	vis[vertex]=true;
	for(int child: g[vertex])
	{
		//cout<<"par "<<vertex<<" "<<"child "<<child<<endl;
		if(vis[child])continue;
		
		dfs(child);	
	}
	order.pb(vertex);
}

void dfs1(int ver)
{
	
	vis[ver]=true;
	ans.pb(ver);
	for(auto ch: rev_g[ver])
	{
		if(vis[ch])continue;
		
		dfs1(ch);	
	}
	
}

int main()
{
	
		int n,m;
	    cin>>n>>m;
	    int c=0;
	    for(i=0; i<m; i++)
	    {
	    	int x,y;
	    	cin>>x>>y;
	    	g[x].pb(y);
	    	rev_g[y].pb(x);
	    }
	    
	    for(i=1; i<=n; i++)
	    {
	    	if(vis[i])continue;
	    	else dfs(i);
	    	
	    }
	    
	    reverse(order.begin(), order.end());
	    
	    
	    
	    for(int i= 1; i<=n; i++)vis[i]= false;
	    
	    for(auto it: order)
	    {
	    	
	   	    if(vis[it])continue;
	    	else dfs1(it);
	    	c++;
	    	ans.pb(0);
	    }
	    
	    cout<<c<<endl;
	    for(auto it: ans)
	    {
	    	if(it==0)
	    	{
	    		nl;
	    		continue;
	    	}
	   	    cout<<it<<" ";
	   	    
	    }
	    nl;
	   
	    
	    
       
 
}