#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define       ll             long long int
#define       i_for(n)       for(ll i=0;i<n;i++)
#define       ri_for(n)      for(ll i=n-1;i>=0;i--)
#define       for_i(n)       for(ll i=1;i<=n;i++)
#define       j_for(n)       for(ll j=0;j<n;j++)
#define       rj_for(n)      for(ll j=n-1;j>=0;j--)
#define       for_j(n)       for(ll j=1;j<=n;j++)
#define       yes            cout<<"YES"<<endl
#define       no             cout<<"NO"<<endl
#define       all(a)         a.begin(),a.end()
#define       Srt(a)         sort(all(a))
#define       rev(a)         reverse(all(a))
#define       srt(a,n)       sort(a,a+n)
#define       sqr(x)         pow(2,x)
#define       max2(a,b)      max(a,b)
#define       min2(a,b)      min(a,b)
#define       max3(a,b,c)    max(a,max(b,c))
#define       min3(a,b,c)    min(a,min(b,c))
#define       ci(n)          cin>>n
#define       ot(n)          cout<<n<<endl
#define       nl             cout<<endl
#define       upd(n)         cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)       (a*b)/__gcd(a,b)
#define       Ex()           cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl

using namespace std;

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
ll M=1e9;
void prime(ll n)
{
    ll num[M];
    ll s=sqrt(n)+1;
    for(i=3; i<=n; i+=2)
    {
        if(num[i]==false)
            for(j=i*i; j<=n; j+=i+i)
                num[j]=true;
    }
}
ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       cin>>m>>n;
       ll x[m],y[n],p[max(m,n)];
       i_for(m)cin>>x[i];
       i_for(n)cin>>y[i];
       sort(x,x+m);
       sort(y,y+n);
       c=0,k=0;
       i_for(m)
       {
           j_for(n)
           {
               if(x[i]==y[j])
               {
                   c=1;
                   p[k++]=x[i];
                   i=m;
                   break;
               }
           }
       }
       if(c)
       {
           yes;
           cout<<k<<" ";
           cout<<p[0]<<" ";
           nl;
       }
       else no;

    }

}
