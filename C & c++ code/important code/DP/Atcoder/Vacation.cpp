// Problem: C - Vacation
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_c
// Memory Limit: 1024 MB
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

const ll mx=1e5+9;
ll dp[mx][4];
ll x[mx][4];
ll n;

ll solve(ll din, ll kaj)
{
	if(din>n)return 0;
	
	if(dp[din][kaj] != -1)return dp[din][kaj];
	
	ll ret = 0 ;
	
	for(ll i=1 ; i<=3 ; i++)
	{
		if(kaj!=i)
			ret= max(ret, solve(din + 1, i) + x[din][i]);
	}
	
	return dp[din][kaj]=ret;
	
	
}

int main()
{
    start() 
    
    cin >> n;
    
    for(ll i = 1 ; i <= n ; i++)
    {
    	cin>> x[i][1] >> x[i][2] >> x[i][3] ;
    }
    
    memset(dp , -1 , sizeof(dp)) ;
    
    cout<<solve(1,0)<<endl;
    

}