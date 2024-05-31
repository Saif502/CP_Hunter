#include<bits/stdc++.h>

using namespace std;

int tc=1,position=0;

int bfs(int src, int TTL,map <int, vector<int> > edges)
{
    map<int,int> visited,level;
    int unreach=0;
    queue<int>Q;
    Q.push(src);
    position=1;
    visited[src]=1;
    level[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        cout<<u<<"---";
        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            cout<<v<<" ";
            if(!visited[v])
            {
                level[v]=level[u]+1;
                //cout<<"***"<<level[v]<<" ";
                if(level[v]>TTL)unreach++;
                //printf("unreach = %d\n",unreach); //j node gula unreach
                visited[v]=1;
                Q.push(v);
                position++;//printf("%d unreach\n",unreach); koto num node teke jay na

            }

        }
        cout<<"\n";
        Q.pop();
    }
    return unreach;

}

int main()
{
    vector<pair< int,int > >check(100); //pairakare chack ex: 35  2 , 35   3;
    int edge,x,y,node,source,ans;
    while(1)
    {

        map <int,vector<int> > edges; //a[0]=0,1,2;a[1]=2,3,4,5;
        scanf("%d",&edge);
        
        if(edge==0) return 0;

        for(int i=0; i<edge; i++)
        {
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        for(auto x: edges)
        {
        	cout<<x.first<<":-- ";
        	for(auto p: x.second)
        	{
        		cout<<p<<" ";
        	}
        	cout<<"\n";
        }
        cout<<"\n";
        int index=0,totalunreach; 
        while(1)
        {
            cin>>check[index].first>>check[index].second; // 35   2

            if(check[index].first ==0 and check[index].second==0) break;
            
            index++;

        }
        for(int i=0; i<index; i++)
        {
            ans=bfs(check[i].first,check[i].second,edges);//        printf("val= %d" ,ans);
            totalunreach = ans + edges.size()-position;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,totalunreach,check[i].first,check[i].second);

            position=0;

        }

    }
    return 0;

}
