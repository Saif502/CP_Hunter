//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)

#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;


vector<int>g[100005];
bool vis[1000050];
int level[1000050];

bool dfs(vector<vector<int>>& image,int i, int j, int firstcolor, int newcolor )
{
	int n=image.size();
	int n=image[0].size();
	if(i<0 || j<0 || i>=n || j>=m)return;
	if(image[i][j] != firstcolor)return;
	
	image[i][j]=newcolor;
	
	dfs(i-1,j,image,firstcolor,newcolor);
	dfs(i+1,j,image,firstcolor,newcolor);
	dfs(i,j+1,image,firstcolor,newcolor);
	dfs(i,j-1,image,firstcolor,newcolor);
}

 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
  {
  	 int firstcolor=image[sr][sc];
  	 if(firstcolor!=color) dfs(image,sr,sc,firstcolor,color);
  	 return image;
  }

