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
int i,j;
vector<int>g[100005];
int vis[100050];
int level[100050];
int n, lyken=0, vam=0;

void reset()
{
	for(i=0; i<20005; i++)
	{
		vis[i]=0;
		g[i].clear();	
	}
}
void bfs(int s)
{
	queue<int>q;
	q.push(s);
	vis[s]=black;
	vam++;
	while(!q.empty())
	{
		int v=q.front();
		for(int child: g[v])
		{
			if(vis[child]==white)
			{
				q.push(child);
				if(vis[v]==black)
				{
					vis[child]=red;
					lyken++;
				}
				else
				{
					vam++;
					vis[child]=black;
				}
				
			}
		}
		q.pop();
	}
}

int main()
{
	int t,cc=1;
	SNF1(t);
	while(t--)
	{
		reset();
	    SNF1(n);
	    for(i=1; i<=n; i++)
	    {
	    	int x,y;
	    	SNF2(x,y);
	    	g[x].pb(y);
	    	g[y].pb(x);
	    }
	    int sum=0;
	    for(i=1; i<=20005; i++)
	    {
	    	vam=0,lyken=0;
	    	if(vis[i]==white && !g[i].empty())
	    	{
	    		bfs(i);
	    	}
	    	sum+=max(vam,lyken);
	    }
	    cout<<"Case "<<cc++<<": "<<sum<<endl;
		
	}
    
    
}