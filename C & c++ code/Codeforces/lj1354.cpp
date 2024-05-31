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

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int main()
{
    ll t;
    cin>>t;
    ll tt=1;
    while(t--)
    {
       string s,k;
       cin>>s>>k;
       string p="",q="",r="",l="";
       ll x,y,z,o,c=0;
       i_for(k.size())
       {
           if(k[i]=='.')
           {
               c=i+1;
               break;
           }
           else p+=k[i];
       }
       for(j=c; j<k.size(); j++)
       {
           if(k[j]=='.')
           {
               c=j+1;
               break;
           }
           else q+=k[j];
       }
       for(a=c; a<k.size(); a++)
       {
           if(k[a]=='.')
           {
               c=a+1;
               break;
           }
           else r+=k[a];
       }
       for(b=c; b<k.size(); b++)
       {
             l+=k[b];
       }
       string s1,s2,s3,s4,full;
       s1=to_string(stoi(p, 0, 2 ));
       s2=to_string(stoi(q, 0, 2 ));
       s3=to_string(stoi(r, 0, 2 ));
       s4=to_string(stoi(l, 0, 2 ));
       full=s1+"."+s2+"."+s3+"."+s4;
       cout<<"Case "<<tt++<<": ";
       if(s==full)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }

}

