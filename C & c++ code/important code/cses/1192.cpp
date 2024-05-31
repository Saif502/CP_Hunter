// Problem: Counting Rooms
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1192
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
ll n,m;
char s[1005][1005];
int level[1005][1005];
bool vis[1005][1005];

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>>mov={
	{0,1},{0,-1},
	{1,0},{-1,0},
};
void dfs(int x, int y)
{
	 vis[x][y]=1;
	 for(int i=0; i<4; i++)
		{
			int cx=mov[i].first+x;
			int cy=mov[i].second+y;
			if(!isvalid(cx,cy))continue;
			if(!vis[cx][cy])
			{
				dfs(cx,cy);
			}
		}
	
}

int main()
{
	cin>>n>>m;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>s[i][j];
			if(s[i][j]=='#')vis[i][j]=1; 
		}
	} 
	
	ll c=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(!vis[i][j])dfs(i,j),c++;
		}
	}
	cout<<c<<endl;
	 
}