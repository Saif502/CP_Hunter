#include <bits/stdc++.h>
using namespace std;

bool vis[30000];
int distan[30000];

vector<int>Graph[30000];
vector<int>weight[30000];

void bfs(int a,int n); //modified bfs to calculate the distance from source node to all other nodes
void clr(int n); // utility function for resetting values of "vis" and "dis" array.

int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        int n,u,v,cost;  // n -> number of nodes .
        scanf("%d",&n);

        for( int i = 0 ; i < n ; i++ )
        {
            Graph[i].clear();
            weight[i].clear();
        }

        // creating adjacent node.
        for( int i = 0; i < n-1 ; i++ )
        {
            scanf("%d %d %d",&u,&v,&cost); //u & v are the nodes of an edge whose weight equals to 'cost'.

            Graph[u].push_back(v);         //creating adjacency matrix/list
            Graph[v].push_back(u);

            weight[u].push_back(cost);      //creating adjacency matrix/list to record weight of edges
            weight[v].push_back(cost);
        }

        int max_distance=-1,first_node;

        clr(n);

        // bfs for finding the distance of each node from root or node '0'
        bfs(0,n);

        // finding the node that's farthest from the node.
        for(int i = 0; i < n; i++)
        {
            if(distan[i]>max_distance)
            {
                max_distance = distan[i];
                first_node=i;
            }
        }
        clr(n);
        int ans=0;

        bfs(first_node,n); // finding the distance of each node from "first_node"

        for(int i=0; i<n; i++)
        {
            if(distan[i]>ans)
            {
                ans = distan[i];
            }
        }
        printf("Case %d: %d\n",++cas,ans);

    }
    return 0;
}

void bfs(int a,int n)
{
    queue<int>q;

    vis[a] = 1;
    q.push(a);

    while(!q.empty())
    {
        int top;
        top = q.front();
        q.pop();

        for(int i=0; i<Graph[top].size(); i++)
        {
            int var = Graph[top][i];

            if(!vis[var])
            {
                vis[var] = 1;
                distan[var] = distan[top] + weight[top][i]; // distan[ node ] is the node's distance from source.
                q.push(var);
            }
        }
    }
}

void clr(int n)
{
    for( int i = 0 ; i < n ; i++ )
    {
        vis[i] = 0;
        distan[i] = 0;
    }
}