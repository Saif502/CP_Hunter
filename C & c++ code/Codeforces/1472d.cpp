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
    while(t--)
    {
        cin>>n;
        ll p=0,q=0,k;
        vector<ll>bal(n,0),chol(n,0);
        for_i(n)
        {
            cin>>k;
            if(k%2==0) bal.push_back(k),p+=k;
            else chol.push_back(k),q+=k;
        }
        sort(all(bal),greater<ll>());
        sort(all(chol),greater<ll>());
        i=0,j=0,c=0;
        // cout<<p<<" "<<q<<endl;
        while(1)
        {
                 ++c;
            if(bal[i]>chol[j]&&(c%2)) i++;

            else if(bal[i]<chol[j]&&(c%2)) q-=chol[j],j++;

            else if(bal[i]<chol[j]&&!(c%2)) j++;

            else if(bal[i]>chol[j]&&!(c%2))p-=bal[i],i++;

            else if(c!=n)break;

        }
        // cout<<p<<" "<<q<<endl;
        if(p>q)cout<<"Alice"<<endl;
        else if(p<q)cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;

    }

}
