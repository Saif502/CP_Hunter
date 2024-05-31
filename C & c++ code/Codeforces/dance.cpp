
#include<bits/stdc++.h>
#include <numeric>
#include<iostream>
#include<vector>
#include <map>
#include<string>
#include<math.h>
#define ll long long int
#define ld long double
#define ifor(n) for(ll i=0;i<n;i++)
#define rifor(n) for(ll i=n-1;i>=0;i--)
#define fori(n) for(ll i=1;i<=n;i++)
#define jfor(n) for(ll j=0;j<n;j++)
#define rjfor(n) for(ll j=n-1;j>=0;j--)
#define forj(n) for(ll j=1;j<=n;j++)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define MAX 100010
#define co(n) cout<<n<<endl
#define cn(n) cout<<n<<" "
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


using namespace std;

ll t,i,j,k;
ll mx=INT_MAX,mi=INT_MIN,a[MAX],c[MAX],n;


int main()
{
    ll n,p;
    cin>>n>>p;
    ll a[10000],c=0,sum=0,d=0;
    ifor(n)cin>>a[i];
    sort(a,a+n);


    rifor(n)
    {
        sum+=a[i];
        c++;
        if(sum>=p){d=1;break;}
    }

    d==1?co(c):co(-1);

    return 0;
}
