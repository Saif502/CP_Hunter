/*
PB-1:There will be t test cases (1 <= t <=10^4). In each case,
     given n and q (1 <= n,q <= 10^6)andan array of length n.
     next q lines will contain l, r (1 <= l, r <= n). For each line
     print the sum of all the values within index l to r.
     The Sum of n overall t test cases will not exceed 10^8.
*/
/*
     Time complexity:O(N)
*/

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

ll m,n,c=0,k=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll q;
        cin>>n>>q;
        ll x[n+5],a[n+5];
        a[0]=0;
        for_i(n)
        {
            cin>>x[i];
            a[i]=a[i-1]+x[i];
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            cout<<a[r]-a[l-1]<<endl;
        }
    }

    return 0;
}

