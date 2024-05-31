// Problem: Odd Topic
// Contest: CodeChef - AABH2020
// URL: https://www.codechef.com/AABH2020/problems/ODTPIC?tab=statement
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

const int N=4e3 + 5;
const int N1=1e5 + 5;

bitset<N>bit[N1];
bitset<N>bit1[N1];

int main()
{
    start() 
    
    ll n,m,q;
    cin>>n>>m>>q;
    ll x[n+5],y[m+5];
    
    for(ll i=1; i<=n; i++)
    {
    	cin>>x[i];
    	bit[i]=bit[i-1];
    	if(bit[i-1][x[i]])bit[i][x[i]]=0;
    	else bit[i][x[i]]=1;
    	
    }
    for(ll i=1; i<=m; i++)
    {
    	cin>>y[i];
    	bit1[i]=bit1[i-1];
    	if(bit1[i-1][y[i]])bit1[i][y[i]]=0;
    	else bit1[i][y[i]]=1;
    		
    }
    
    
    while(q--){
    	ll l1,r1,l2,r2;
	    cin>>l1>>r1>>l2>>r2;
	    
	    //bit[x[0]]=1;
	    
	 
	    bitset<N> z=(bit[r1])^(bit[l1 - 1]);
	    
	     
	    bitset<N> z1=(bit1[r2])^(bit1[l2 - 1])^z;
	    
	    cout<<z1.count()<<endl;
    }
    
    
   

}