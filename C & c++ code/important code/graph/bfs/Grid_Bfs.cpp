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
#define       inf              0x3f
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;


const int maxn = 1e3+5;
int cas=1;
char mapp[maxn][maxn];
int vis [maxn] [maxn], dis [maxn][maxn];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
void solve()
{
    int n,m,k;
    int sx,sy, ex,ey;
    while(~scanf("%d %d%d",&n,&m,&k))
    {
        for(int i=1; i<=n; i++)
        {
        	scanf("%s", mapp[i]+1);
        }
        
        scanf("%d %d %d %d", &sx, &sy,&ex, &ey);
        
        memset(vis, 0, sizeof(vis));
        memset(dis, 0x3f, sizeof(dis));
        
        queue<pair<int, int>>q;
        q.push(make_pair(sx,sy));
        vis[sx][sy] = 1;
        dis [sx][sy] = 0;
        while (!q.empty())
        {
            pair<int, int>tmp = q.front();
            q.pop();
               
            for(int i=0; i<4; i++)
            {
                for(int j=1; j<=k; j++)
                {
                    int xx = tmp.F+dx[i]*j;
                    int yy = tmp.S+dy[i]*j;
                    if(xx<1 || xx>n || yy<1 || yy>m) break;
                    if (mapp[xx][yy] == '#') break;
                    if (dis[xx][yy]!=inf && dis[xx][yy] < dis[tmp.F][tmp.S] + 1) break;
                    if (vis[xx][yy]) continue;
                    vis[xx][yy] = 1;
                    cout<<xx<<" "<<yy<<endl;
                    dis[xx][yy] = dis[tmp.F][tmp.S] + 1;
                    q.push(make_pair(xx,yy));
                }
            }
        }
    }
    if(dis[ex][ey]!=inf) cout << dis[ex][ey] << endl;
    else cout << "-1" << endl;
}
int main()
{
	solve();
	
}

