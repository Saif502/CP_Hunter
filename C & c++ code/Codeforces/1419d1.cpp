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

using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int main()
{
    cin>>n;
    ll x[n];
    c=0;
    i_for(n)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    c=((n+1)/2)-1;
    cout<<c<<endl;
    list<ll>li(x+c,x+n);
    list<ll>::iterator it;
    it=li.begin();

    for(i=0; i<c; i++)
    {
        ++it;
        li.insert(it,x[i]);

    }

    for(it=li.begin(); it!=li.end(); ++it)
    {
        cout<<*it<<" ";
    }
    nl;


}
/*

#include<map>
#include<vector>
#include<string>
#include<math.h>
#include<numeric>
#include<iostream>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define         f                first
#define         s                second
#define         pb               push_back
#define         pop              pop_back
#define         MAX              100010
#define         ch               char
#define         st               string
#define         ld               long double
#define         ll               long long int
#define         ifor(n)          for(ll i=0;i<n;i++)
#define         ofor(i,n)        for(ll i=0;i<n;i++)
#define         rifor(n)         for(ll i=n-1;i>=0;i--)
#define         fori(n)          for(ll i=1;i<=n;i++)
#define         jfor(n)          for(ll j=0;j<n;j++)
#define         ijfor(n)         for(ll j=i+1;j<n;j++)
#define         rjfor(n)         for(ll j=n-1;j>=0;j--)
#define         forj(n)          for(ll j=1;j<=n;j++)
#define         FOR(a, b)        for (ll i = (a); i <= (b); i++)
#define         all(a)           a.begin(),a.end()
#define         Srt(a)           sort(all(a))
#define         rev(a)           reverse(all(a))
#define         srt(a,n)         sort(a,a+n)
#define         sqr(x)           pow(2,x)
#define         ci(n)            cin>>n
#define         wh(n)            while(n--)
#define         co(n)            cout<<n<<endl
#define         cn(n)            cout<<n<<" "
#define         yes              cout<<"YES"<<endl
#define         no               cout<<"NO"<<endl
#define         fst              cout<<"First"<<endl
#define         snd              cout<<"Second"<<endl
#define         nl               cout<<endl
#define         lrg(x,y)         ((x+y-1)/y)
#define         max3(a,b,c)      max(a,max(b,c))
#define         max4(a,b,c,d)    max(max3(a,b,c),d)
#define         min3(a,b,c)      min(a,min(b,c))
#define         min4(a,b,c,d)    min(a,min3(b,c,d))
#define         upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define         sy               system("COLOR 0C")
#define         lcm(a,b)         (a*b)/__gcd(a,b)
#define         fast()           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define       co(n)            cout<<n

using namespace std;

ll t=0,i=0,j=0,k=0,n,a[MAX],c[MAX];

ll in()
{
    ll a;
    if(scanf("%lld", &a) == EOF) return EOF;
    return a;
}

int main()
{
    ci(n);
    ll a[n];
    ifor(n)ci(a[i]);
    srt(a,n);
    ll x=(n+1)/2;
    x--;
    co(x);
    ifor(n-2)
    {
        ll t1,t2,t3;
        t1=a[i];
        t2=a[i+1];
        t3=a[i+2];
        a[i]=t3;
        a[i+1]=t1;
        a[i+2]=t2;
        i++;
    }
    ifor(n)cn(a[i]);


    return 0;
}
*/



