// Problem: G - Lunch 04
// Contest: Virtual Judge - Weekly Contest 06
// URL: https://vjudge.net/contest/563120?fbclid=IwAR0kSowQG8xqcDEgEVgHyCaJInBJ1HKRR76Vx2nZJb_weZxoEHb2KEKffmg#problem/G
// Memory Limit: 64 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
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
#define       lrg(x,y)         ((x+y-1)/y)
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;

#define mx 100002

vector<pair<int,int>>g[mx];
// no need vis array for dfs tree cause it has no loop and pass the parents
int P[mx][22]; //স্পার্স টেবিল
int parent[mx];
int level[mx];
int Log[mx];
int val[mx];

void dfs(int vertex, int par=-1, int lev=0, int cost=1)
{
	parent[vertex]=par;
	level[vertex]=lev;
	for(auto child: g[vertex])
	{
		//cout<<"par "<<vertex<<" "<<"child "<<child<<endl;
		if(child.F == par)continue;
		dfs(child.F, vertex, lev+1, child.S);	
		
	}
	
}

void clear()
{
    val[0] = 1;
    for (int i = 0; i <mx; ++i)
        g[i].clear();
}


void lca_init(int N)
  {
      memset (P,-1,sizeof(P)); //শুরুতে সবগুলো ঘরে -১ থাকবে 
      int i, j;
      for (i = 0; i < N; i++)
       {
       	  P[i][0] = parent[i];
       }
          

      for (j = 1; (1 << j) < N; j++)
      {
      	 for (i = 0; i < N; i++)
      	 {
      	 	 if (P[i][j - 1] != -1)
      	 	 {
      	 	 	 P[i][j] = P[P[i][j - 1]][j - 1];
      	 	 }     
      	 }
      } 
      
      
      for (int i = 0; i <18; ++i) Log[1 << i] = i;

      for (int i = 1; i <mx; ++i)
	    {
	    	 if (!Log[i])
	            Log[i] = Log[i - 1];
	    }    
            
  }


int main()
{
	int t,tt=1;
	cin>>t;
	
	while(t--)
	{
		int n,q;
	    cin>>n>>q;
	    clear();
	    
	    for(ll i=1; i<n; i++)
	    {
	    	int x,value;
	    	cin>>x>>value;
	    	val[i]=value;
	    	g[i].pb({x,value});
	    	g[x].pb({i,value});
	    }
	    
	    dfs(0);
	    lca_init(n);
	    
	    cout<<"Case "<<tt++<<":\n";
	    while(q--)
	    {
	    	int idx, value;
	    	cin>>idx>>value;
	    	
	    	int log = Log[level[idx]];
	    	
	    	//cout<<log<<endl;

		    for( int i = log; i >= 0; --i)
		      {
		      	cout<<P[idx][i]<<" ";
		        if (val[P[idx][i]] >= value) idx = P[idx][i];     
			  }
	          nl;
	       // cout<<idx<<endl;
	    }
	    
     }
}