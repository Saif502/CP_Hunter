// Problem: D. Little Girl and Maximum XOR
// Contest: Codeforces - Codeforces Round 169 (Div. 2)
// URL: https://codeforces.com/contest/276/problem/D
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

int main()
{
    start() 
   
    
    ll n,m;
    cin>>n>>m;
    bitset<64>bit(n);
    bitset<64>bit1(m);
    ll c=0;
    for(ll i=63; i>=0; i--)
    {
    	if((n&(1ll<<i)) != (m&(1ll<<i))){c=(1ll<<i+1)-1;break;}
    }
    cout<<c<<endl;
    
   
   
     
    
    
    
    

}