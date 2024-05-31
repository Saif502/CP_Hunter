//---------------------------ALLAHU AKBAR-------------------------//
//                                                                //
//                                +                               //
//                                                                //
//---------------------------ALHAMDULILLAH------------------------//
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
//#define       co(n)            cout<<n

using namespace std;

ll t=0,i=0,j=0,k=0,n,a[MAX],c[MAX];

ll in()
{
    ll a;
    if(scanf("%lld", &a) == EOF) return EOF;
    return a;
}
ld In()
{
    ld a;
    if(scanf("%ldd", &a) == EOF) return EOF;
    return a;
}

int main()
{
    ci(t);
    wh(t)
    {
        ci(n);
        ll x;
        map<int,pair<int,int>>mp{{1,{0, 9999999}}, {2,{0, 9999999}}, {3,{0, 9999999}}, {4,{0, 9999999}},{5,{0, 9999999}}};

//        for(auto it : mp)
//        {
//            ll x,y,z;
//            x=it.f;
//            //co(x);
//            y=(it.s).f;
//            z=(it.s).s;
//            cn(x),cn(y),co(z);
//            //y.f.....y.s
//        }

        ifor(n)
        {
            jfor(5)
            {
                ci(x);
                ll y,z;
                y=mp[j+1].f;
                z=mp[j+1].s;

                if(x<z)
                {
                    //cn(x),co(mp[j+1]);
                    mp[j+1].s=x;
                    mp[j+1].f=i+1;
                }
//                y=mp[j+1].f;
//                z=mp[j+1].s;
//                cn(y),co(z);
            }
        }

        unordered_map<int,int>pm;
        ll mx=0,c=0,ans=0;

        for(auto it : mp)
        {
            ll x,y,z;
            x=it.f;
            //co(x);
            y=(it.s).f;
            z=(it.s).s;
            cn(x),cn(y),co(z);

            pm[y]++;
            //co(pm[y]);

            if(pm[y]>=mx&&pm[y]!=1)
            {
                if(pm[y]==mx)c=1;
                mx=pm[y];
                ans=y;
            }

            //y.f.....y.s
        }
        if(c==1)co(-1);
        else co(ans);
    }

    return 0;
}
/*

----------------------------

Ab.Mahin

ci(t);
    wh(t)
    {
        st s;
        ci(s);
        ll f=0,l=0,c=0,d=0,x=0,y=0,z=0;
        ifor(10)
        {
            if(i%2)
            {
                if(s[i]=='1')l++;
                else if(s[i]=='?')
                {
                    if(f<=l)y++;
                }
            }
            else
            {
                if(s[i]=='1')f++;
                else if(s[i]=='?')
                {
                    if(f>=l)x++;
                }
            }
            c=f+x;
            d=l+y;
            if(i>=5)
            {
                if(d<c||c>d){co(i+1);break;}
            }
        }
    }

----------------------------

*/
