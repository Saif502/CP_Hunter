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
ll i,j;
const int N=10e5+10;
int parant[N];
int size[N];

void make(int v)
{
	parant[v]=v; 
}
int find(int v)
{
	if(v==parant[v])return v;
	return parant[v]=find(parant[v]);
}

void Union(int a, int b)
{
	a=find(a);
	b=find(b);
	if(a!=b)
	{
		parant[b] = a;
	}
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
    	make(i);
    }
    while(k--)
    {
    	int u,v;
    	cin>>u>>v;
    	Union(u,v);
    }
    int count=0;
    for(i=1; i<=n; ++i)
    {
    	if(find(i)==i)count++;
    }
    cout<<count<<endl;
    
}