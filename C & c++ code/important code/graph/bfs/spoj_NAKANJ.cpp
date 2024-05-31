#include<bits/stdc++.h>
using namespace std;
const int N=10e5+5;
int vis[8][8];
int level[8][8];
int g[10][10];

int getX(string s)
{
	return s[0]-'a';
}

int getY(string p)
{
	return p[1]-'1';
}

void reset()
{
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			level[i][j]=0;
			vis[i][j]=0;
			g[i][j]=0;
		}
	}
}
bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<8 && y<8;
}
vector<pair<int,int>>movements={
	{-1,2},{1,2},
	{-1,-2},{1,-2},
	{2,-1},{2,1},
	{-2,-1},{-2,1}, 
};
int bfs(string s , string p)
{
	int sX=getX(s);
	int sY=getY(s);
	int pX=getX(p);
	int pY=getY(p);
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
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		string s1,s2;
		cin>>s1>>s2;
		cout<<bfs(s1,s2)<<endl;
	}
	
	
}