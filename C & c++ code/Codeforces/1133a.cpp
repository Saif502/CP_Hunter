// Problem: A. Middle of the Contest
// Contest: Codeforces - Codeforces Round #544 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1133/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wformat"
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define         ll             long long int
#define         ld               long double
#define         F                first
#define         S                second
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       ri_for(n)        for(ll i=n-1;i>=0;i--)
#define       for_i(n)         for(ll i=1;i<=n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       rj_for(n)        for(ll j=n-1;j>=0;j--)
#define       for_j(n)         for(ll j=1;j<=n;j++)
#define       FOR(a, b)        for (ll i = (a); i <= (b); i++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       Srt(a)           sort(all(a))
#define       rev(a)           reverse(all(a))
#define       srt(a,n)         sort(a,a+n)
#define       sqr(x)           pow(2,x)
#define       max2(a,b)        max(a,b)
#define       min2(a,b)        min(a,b)
#define       max3(a,b,c)      max(a,max(b,c))
#define       min3(a,b,c)      min(a,min(b,c))
#define       pb               push_back
#define       ci(n)            cin>>n
#define       ot(n)            cout<<n<<endl
#define       nl               cout<<endl
#define       lrg(x,y)         ((x+y-1)/y)
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl

using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;

bool id_swap(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.F!=b.F)
    {
        if(a.F<b.F)return false;
        return true;
    }
    else
    {
        if(a.S<b.S)return false;//sort 2nd elements as descending order: use ->sort(all(a),id_swap)
        return true;
    }
}
#define  M  1000000
bool num[M];
vector<ll>prime;
void isPrime(ll n)
{
    num[2]=true;
    ll s=sqrt(n)+1;
    for(i=3; i<=s; i+=2)
    {
        if(num[i]==false)
            for(j=i*i; j<=n; j+=i+i)
                num[j]=true;
    }
    prime.pb(2);
    for(i=3; i<=n; i+=2)
    {
        if(num[i]==false)prime.pb(i);
    }
}

int main()
{
    	string s,s1,x1,y1,x2,y2;
    	cin>>s>>s1;
    	a=stoi(s.substr(0, 2));
        c=abs(stoi(s.substr(0, 2))-stoi(s1.substr(0, 2)));
        k=(stoi(s.substr(3, 5))+stoi(s1.substr(3, 5)));
        ll z=((c*60)+k)/2;
        ll y=(z/60);
        
        if((a+y)<10 && (z%60)<10)cout<<"0"<<a+y<<":"<<"0"<<z%60<<endl; 
        else if(z%60<10)cout<<a+y<<":"<<"0"<<z%60<<endl;
        else  if((a+y)<10)cout<<"0"<<a+y<<":"<<z%60<<endl;
        else cout<<a+y<<":"<<z%60<<endl;
       
        

}