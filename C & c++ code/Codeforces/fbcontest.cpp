#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
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
	//READ("1.txt");
    WRITE("2.txt");
    ll t;
    cin>>t;
    b=1;
    while(t--)
    {
        string s;
        cin>>s;
        ll x[26]={0};
        ll y[26]={0};
        c=0,k=0,m=0,n=0;
        ll  a=0,e=0,i=0,o=0,u=0,p=0,q=0;
        if(s.size()==1)
        {
            cout<<"Case #"<<b++<<": "<<"0"<<endl;
            continue;
        }
        i_for(s.size())
        {
            if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O'|| s[i]=='U')
            {
                y[s[i]-'A']++;
                c++;
            }
            else
            {
                k++;
                x[s[i]-'A']++;
            }

        }
           p=*max_element(x,x+26);
           m=((k-p)*2)+c;
           q=*max_element(y,y+26);
           n=((c-q)*2)+k;
           cout<<"Case #"<<b++<<": "<<min(m,n)<<endl;

        }

}
