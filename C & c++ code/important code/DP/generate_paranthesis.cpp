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
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
//order_of_key,find_by_order
   
using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp;
ll i,j;
vector<string>total;

void genarete(string &s, int open, int close)
{
	//cout<<s<<endl;
	if(open==0 && close==0)
	{
		total.pb(s);
		return; 
	}
	if(open>0)
	{
		s+='(';
		cout<<s<<endl;
		genarete(s,open-1, close);
		s.pop_back();
		cout<<"*"<<s<<endl;
	}
	if(close>0 && open<close)
	{
		s+=')';
		cout<<s<<endl;
		genarete(s,open, close-1);
		s.pop_back();
		cout<<"**"<<s<<endl;
	}
	//cout<<"**"<<s<<endl;
}

int main()
{
	start() 
    cin>>n;
    string s="";
    genarete(s,n,n);
    //for(auto it: total)cout<<it<<endl;

}