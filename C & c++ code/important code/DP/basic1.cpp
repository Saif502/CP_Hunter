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
ll step[N];

ll find(ll  n)
{
	if(n==0 || n==1)return 0;
	if(step[n]!=-1)return step[n];
	ll ans=find(n-1)+1;
	if(n%2==0)ans=min(ans,find(n/2)+1);
	if(n%3==0)ans=min(ans,find(n/3)+1);
	
	step[n]=ans;
	return step[n];
}

int main()
{
    start() 
    memset(step, -1, sizeof step);
    ll z=10000;
    cout<<find(7)<<endl;

}