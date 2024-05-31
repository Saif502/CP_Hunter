// Problem: Message Route
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1667
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
#define       pb               push_back
#define       nl               cout<<endl
#define       SNF1(a)          scanf("%d",&a)
#define       SNF2(a,b)        scanf("%d%d",&a,&b)
#define       pnf(a)           printf("%d",a);
#define       white                0
#define       black                1
#define       red                  2
   
using namespace std;

//ll MAX=0,MIN=999999999,sum=0;
#define N 100005
int i,j;
vector<int>g[100005];
bool vis[1000050];
int level[1000050];
int n,m;
vector<int>p(N,-1);

void bfs(int s)
{
	queue<int>q;
	q.push(s);
	vis[s]=true;
	level[s]=0;
	
	while(!q.empty())
	{
		int v=q.front();
		for(int child: g[v])
		{
			if(!vis[child])
			{
				q.push(child);
				vis[child]=1;
				level[child]=level[v]+1;
				p[child]=v;
			}
		}
		q.pop();
	}
}

int main()
{
	
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
    	int x,y;
    	cin>>x>>y;
    	g[x].pb(y);
    	g[y].pb(x);
    }
    bfs(1);
    if(!level[n])
    {
    	cout<<"IMPOSSIBLE"<<endl;
    	return 0;
    }
    cout<<level[n]+1<<endl<<1<<" ";
    ll k=n;
    vector<int>xx;
    while(p[k]!=-1)
    {
    	xx.pb(k);
    	k=p[k];
    }
    reverse(all(xx));
    for(auto it: xx)cout<<it<<" ";
    nl;
    
   
   
    
    
}