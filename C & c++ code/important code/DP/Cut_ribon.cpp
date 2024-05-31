// Problem: A. Cut Ribbon
// Contest: Codeforces - Codeforces Round 119 (Div. 2)
// URL: https://codeforces.com/problemset/problem/189/A
// Memory Limit: 256 MB
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

const ll N=2e5+5;
ll step[N],x[3];

ll find(ll  n)
{
	if(n==0)return 0;
	ll ans=INT_MIN;
	if(step[n]!=-1)return step[n];
	//cout<<n<<" "<<ans<<endl;
	if(n>=x[0])ans=max(ans,find(n-x[0])+1);
	if(n>=x[1])ans=max(ans,find(n-x[1])+1);
	if(n>=x[2])ans=max(ans,find(n-x[2])+1);
	step[n]=ans;
	return step[n];
}

int main()
{
    start() 
    memset(step, -1, sizeof step);
    ll n;
    cin>>n>>x[0]>>x[1]>>x[2];
    //sort(x,x+3);
    cout<<find(n)<<endl;

}