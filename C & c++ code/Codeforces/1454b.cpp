#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<string.h>
#define ll long long int
#define i_for(n) for(ll i=0;i<n;i++)
#define ri_for(n) for(ll i=n-1;i>=0;i--)
#define for_i(n) for(ll i=1;i<=n;i++)
#define j_for(n) for(ll j=0;j<n;j++)
#define rj_for(n) for(ll j=n-1;j>=0;j--)
#define for_j(n) for(ll j=1;j<=n;j++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ed cout<<endl
#define out(n) cout<<n<<endl

using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
         c=0,k=0,a=0,b=0;
        cin>>n;
        ll x[n];
        ll p[n];
        i_for(n)
        {
            cin>>x[i];
             p[b++]=x[i];
        }
        sort(x,x+n);
        a=x[n-1]+1;
        ll y[a]={0};
        i_for(n)
        {
            y[x[i]]++;
        }

        i_for(a)
        {
            if(y[i]==1)
            {
                k=i;
                break;
            }

        }
        if(k==0) cout<<"-1"<<endl;
        else
        {
             i_for(b)
            {
                if(p[i]==k)
                {
                    cout<<i+1<<endl;
                    break;
                }

            }
        }


    }

}
