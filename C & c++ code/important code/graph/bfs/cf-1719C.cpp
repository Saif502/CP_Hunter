// Problem: C. Corners
// Contest: Codeforces - Codeforces Round #815 (Div. 2)
// URL: https://codeforces.com/contest/1720/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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

//ll m,n,c=0,k=0,a=0,b=0,temp;
int i,j;
int n,m;

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<n && y<m;
}
vector<pair<int,int>>movements={
	{-1,0},{1,0},
	{0,-1},{0,1},
	{-1,-1},{-1,1},
	{1,1},{1,-1},
};

bool find_is(ll n, ll m, vector<vector<int>> &x)
{
	i_for(n)
	{
		j_for(m)
		{
			
	    	if(x[i][j]==0)
	    	{
     		    for(auto it: movements)
                {
                	//cout<<"****"<<endl;
	        		int p=i+it.first;
		        	int q=j+it.second;
		        	if(!isvalid(p,q))continue;
		        	if(x[p][q]==0)return 1;
        	    }
	        	
	        }
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      cin>>n>>m;
      vector<vector<int>> x;
      int z=0;
      i_for(n)
      {
	      vector<int>temp;
	      j_for(m)
	      {
	      	  char p;
	      	  cin>>p;
	      	  temp.pb(p-'0');
	      	  if(p=='1')z++;
	      }
	       x.pb(temp);
      }
      
      if(z==n*m)z=z-2;
      else if(!find_is(n,m,x))z--;
      cout<<max(0,z)<<endl;
    }

}