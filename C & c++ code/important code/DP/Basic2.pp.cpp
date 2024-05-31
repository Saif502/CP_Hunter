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
const ll N=2e6+5;
ll step[N];


int count(int n)
{
	if(n==1)return 1;
	if(n==2)return 1;
	if(n==3)return 2;
	if(step[n]!=-1)return step[n];
	return step[n] = (count(n-1)+count(n-3)) % MOD;
}

int main()
{
    start() 
    memset(step, -1, sizeof step);
     
    cout<<count(10)<<endl;
    

}