#include<map>
#include<vector>
#include<string>
#include<math.h>
#include<numeric>
#include<iostream>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
#define         F                first
#define         S                second
#define         pb               push_back
#define         up(v,x)          upper_bound(all(v),x)
#define         lr(v,x)          lower_bound(all(v),x)
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
#define         rSrt(a)          sort(all(x),greater<ll>());
#define         rev(a)           reverse(all(a))
#define         srt(a,n)         sort(a,a+n)
#define         rsrt(a,n)        sort(a,a+n,greater<ll>());
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
#define         sumN(n)          n*(n+1)/2
#define         lrg(x,y)         ((x+y-1)/y)
#define         max3(a,b,c)      max(a,max(b,c))
#define         max4(a,b,c,d)    max(max3(a,b,c),d)
#define         min3(a,b,c)      min(a,min(b,c))
#define         min4(a,b,c,d)    min(a,min3(b,c,d))
#define         upd(n)           cout<< fixed << setprecision(10) <<n<< endl
#define         sy               system("COLOR 0C")
#define         lcm(a,b)         (a*b)/__gcd(a,b)
#define         fast()           ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);cerr.tie(nullptr);
#define         Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
//#define       co(n)            cout<<n
//fill_n(a, n, 1):::Initialize array with same value

using namespace std;

ll t,n,i=0,j=0,k=0;

ll in()
{
    ll a;
    if(scanf("%lld", &a) == EOF) return EOF;
    return a;
}

bool id_swap(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.F!=b.F)
    {
        if(a.F>b.F)return false;
        return true;
    }
    else
    {
        if(a.S>b.S)return false;//sort 2nd elements as descending order: use ->sort(all(a),id_swap)
        return true;
    }
}

int main()
{
    ci(t);
    wh(t)
    {
        ci(n);
        st s;
        ci(s);
        ll z=0;
        char a;

        ifor(n)
        {
            if((s[i]=='?'&&s[i+1]=='R')||(s[i]=='?'&&s[i+1]=='B'))
            {
                a=s[i+1];
                for(j=i; j>=z; j--)
                {
                    if(s[i+1]=='R')
                    {
                        //cn(j),co(i%2);
                        j%2==(i+1)%2?s[j]='R':s[j]='B';
                    }
                    else
                    {
                        j%2==(i+1)%2?s[j]='B':s[j]='R';
                    }
                    //s[j]='X';
                }
                z=i+2;
                //co(z);
            }
            else if(s[i]!='?'&&s[i+1]!='?')z++;
            else if(s[i]=='?'&&i==n-1)
            {
                for(j=z; j<n; j++)
                {
                    if(a=='R')
                    {
                        //cn(j),co(i%2);
                        j%2==(i+1)%2?s[j]='R':s[j]='B';
                    }
                    else
                    {
                        j%2==(i+1)%2?s[j]='B':s[j]='R';
                    }
                    //s[j]='X';
                }
            }

        }
        co(s);
    }

    Ex();
    return 0;
}
