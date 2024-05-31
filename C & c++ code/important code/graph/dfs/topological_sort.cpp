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
vector<int>g[100005];
bool vis[1000050];
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
	ans.pb(vertex);
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
	    }
	    
	    for(i=1; i<=n; i++)
	    {
	    	if(vis[i])continue;
	    	else dfs(i);
	    	c++;
	    }
	    
	    reverse(ans.begin(), ans.end());
	    for(auto it: ans)cout<<it<<" ";
        nl;
	     
 
}