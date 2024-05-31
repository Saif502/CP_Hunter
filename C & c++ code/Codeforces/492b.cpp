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

ll m,n,c=0,k=0,temp;
ll i,j;
int main()
{

    cin>>n>>k;
    double D,MAX=0,MIN=999999999,sum=0,a,b;
    double x[n],y[n];
    c=0;
    i_for(n)
    {
        cin>>x[i];
    }
    sort(x,x+n);

           i_for(n-1)
           {
           sum=x[i+1]-x[i];
           MAX=max(MAX,sum);
           sum=0;
           }
           a=x[0]-0;
           b=k-x[n-1];
           if((MAX/2)>=a && (MAX/2)>=b)
           {
             D=(MAX/2);

           }
           else
           {
                D=max(a,b);
           }

       printf("%.10f\n",D);

}
