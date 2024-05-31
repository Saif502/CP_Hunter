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
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string x="";

        i_for(m)
        {
            if(n%2)
            {
                if(i%2)
                    x+='0',cout<<"0";
                else
                    x+='1',cout<<"1";
            }
            else
            {
                if(i%2==0&&i>1)
                    x+='1',cout<<"1";
                else
                    x+='0',cout<<"0";
            }
        }
        nl;
         i_for(n-2)
        {
            j_for(m)
            {
                if(n%2)
                {
                    if(i%2&&(j==0||j==m-1))cout<<"1";
                    else cout<<"0";
                }
                else
                {
                    if((i%2&&j==m-1)||i%2==0&&j==0)cout<<"1";
                    else cout<<"0";
                }
            }
            nl;
        }
         rev(x);
         cout<<x<<endl;
    }
}



