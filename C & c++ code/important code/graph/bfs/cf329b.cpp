// Problem: Labyrinth
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1193
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
//int i,j;
int level[1005][1005];
bool vis[1005][1005];
int path[1005][1005];
char s[1005][1005];
int n,m;
string z="";

void reset()
{
	for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            level[i][j]=0;
            vis[i][j]=0;
        }
    }
}

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>>mov={
	{0,1},{0,-1},
	{1,0},{-1,0},
};

void bfs(int sx, int sy)
{
	queue<pair<int,int>>q;
	q.push({sx,sy});
    reset();
	vis[sx][sy]=1;
	while(!q.empty())
	{
		pair<int,int>v=q.front();
		int x=v.first, y=v.second;
		for(int i=0; i<4; i++)
		{
			int cx=mov[i].first+x;
			int cy=mov[i].second+y;
			if(!isvalid(cx,cy))continue;
			if(vis[cx][cy]==0 && s[cx][cy]!='T')
			{
				q.push({cx,cy});
				level[cx][cy]=level[x][y]+1;
				vis[cx][cy]=1; 
			}
		}
		q.pop();
	}
	//return level[dx][dy];
}

int main()
{
    //freopen("1input.txt","r",stdin);
	cin>>n>>m;
	int sx,sy,dx,dy;
	vector<pair<int,int>>v;
	ll sum=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>s[i][j];
			if(s[i][j]=='S')sx=i,sy=j;
			if(s[i][j]=='E')dx=i,dy=j;
			if(s[i][j]=='T')vis[i][j]=1;
			
			if(s[i][j]>'0' && s[i][j]<='9')
			{
				 v.pb({i,j});
			}
		}
	}
	bfs(dx,dy);
	ll z=level[sx][sy];
	//cout<<z<<endl;
	for(auto it: v)
	{
		if(level[it.F][it.S]<=z && level[it.F][it.S]>0)sum+=(s[it.F][it.S]-'0');
	}
	cout<<sum<<endl; 
	
	 
}