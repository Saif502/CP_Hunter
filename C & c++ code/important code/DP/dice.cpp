// Problem: C - Getup 03
// Contest: Virtual Judge - Weekly Contest 05
// URL: https://vjudge.net/contest/561028#problem/C
// Memory Limit: 512 MB
// Time Limit: 1000 ms
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

const ll dd=1e6+99;
ll dp[dd];


ll fun(ll n)
{
	if(n==0)return 1;
	if(dp[n]){
		
		return dp[n];
	}
	for(ll i=1; i<=6; i++)
	{
		if(n-i>=0)dp[n]+=fun(n-i);
		dp[n]=dp[n]%MOD;
	}
	//cout<<n<<" "<<dp[n]<<endl;
	return dp[n];
}

int main()
{
    start() 
    
    ll n;
    cin>>n;
    
    cout<<fun(n)<<endl;

}