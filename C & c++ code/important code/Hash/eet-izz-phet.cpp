
#include<bits/stdc++.h>

typedef       long long int       ll;
typedef      unsigned long long   ull;
#define         F                first
#define         S                second
#define         MOD              1000000007
#define         MOD1             1000000007
#define         maxn              999999
#define       i_for(a,n)       for(ll i=a;i<=n;i++)
#define       j_for(a,n)       for(ll j=a;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

ll p[maxn],p1[maxn],revHash[maxn],base=10003193,base1=337;

void prework()
{
    p[0]=p1[0]=1;
    for(ll i = 1; i <=999990; i++)
    {
        p[i] = (p[i-1] * base) % MOD;
        p1[i] = (p1[i-1] * base1) % MOD1;
    }
}

ll Hash(string s)
{
    ll v = 0;
    int sz = s.size();

    for(int i=0; i<sz; i++)
    {
        v = (v + (p[i] * (s[i]-'a'+1))) % MOD;
    }

    return v;
}
int main()
{
    start() 
    prework();
    
    int n;
    unordered_map<ll,int>mp;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        //cout<<Hash(s)<<endl;
        mp[Hash(s)]=1;
    }
    int m;
    cin>>m;
    string qu;
    for(int i=0;i<m;i++)
    {
        cin>>qu;
        if(mp[Hash(qu)]==1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
}