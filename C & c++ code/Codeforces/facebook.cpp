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
#define         MAX              100010
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


int main()
{  

    ci(t);
    ll tt=t;
    wh(t)
    {
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        ll d=n+m-1;
        cout<<"Case #"<<tt-t<<": ";
        if(d>a||d>b)cout<<"Impossible"<<endl;
        else 
        {
            cout<<"Possible"<<endl;
            ll r=0,row=(a-n)/(m-1);
            ll c=0,col=(b-n)/(m-1);
            r=(a-n)%(m-1);
            c=(b-n)%(m-1);
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(j==m-1)cout<<1<<endl;
                    else if(i==0)
                    {
                        if(r)
                        {
                            cout<<row+1<<" ";
                            --r;
                        }
                        else cout<<row<<" ";
                    }
                    else if(i==n-1)
                    {
                        if(c)
                        {
                            cout<<col+1<<" ";
                            --c;
                        }
                        else cout<<col<<" ";
                    }
                    else cout<<1<<" ";
                }
            }
        }
    } 
    
    return 0;
}
/*

----------------------------

Ab.Mahin

----------------------------

*/