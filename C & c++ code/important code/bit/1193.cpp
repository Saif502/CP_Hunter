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
char s[1005][1005];
int n,m;
string z="";
vector<pair<int,int>>pp;

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>>mov={
	{0,1},{0,-1},
	{1,0},{-1,0},
};

int bfs(int sx, int sy, int dx, int dy)
{
	queue<pair<int,int>>q;
	q.push({sx,sy});
	vis[sx][sy]=1;
	
	while(!q.empty())
	{
		pair<int,int>v=q.front();
		int x=v.first, y=v.second;
		for(int i=0; i<n; i++)
		{
			int cx=mov[i].first+x;
			int cy=mov[i].second+y;
			if(!isvalid(cx,cy))continue;
			if(!vis[cx][cy])
			{
				if(i==0)z+="R";
				if(i==1)z+="L";
				if(i==2)z+="D";
				if(i==3)z+="U";
				q.push({cx,cy});
				level[cx][cy]=level[x][y]+1;
				vis[cx][cy]=1; 
				
			}
		}
		q.pop();
		
		
	}
	return vis[dx][dy];
}

int main()
{
	cin>>n>>m;
	int sx,sy,dx,dy;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>s[i][j];
			if(s[i][j]=='A')sx=i,sy=j;
			if(s[i][j]=='B')dx=i,dy=j;
			if(s[i][j]=='#')vis[i][j]=1;
		}
	} 
	if(bfs(sx,sy,dx,dy))yes,cout<<level[dx][dy]<<endl,cout<<z<<endl;
	else no;
	 
}