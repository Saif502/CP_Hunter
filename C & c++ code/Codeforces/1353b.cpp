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
#define end cout<<endl
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
        cin>>n>>k;
        ll x[n],y[n];

        i_for(n) cin>>x[i];
        j_for(n) cin>>y[j];
        sort(x,x+n);
        sort(y,y+n,greater<int>());
        c=0; sum=0;
        for(i=0,j=0; i<n,j<n; i++,j++)
        {
            if(c>=k) break;

            else
            {
                if(x[i]<y[j])
                {
                    swap(y[j],x[i]);
                }
                ++c;
            }


        }
        i_for(n)
        {
            sum+=x[i];
        }
        cout<<sum<<endl;


    }

}
