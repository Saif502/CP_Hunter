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
       cin>>n;
       a=0,b=0;
       c=0,k=0;
       int x[n],p[n],q[n];
       i_for(n)
       {
           cin>>x[i];
           if(x[i]%2)
           {
             c++;
             p[a++]=i;
           }
           else
           {
              k++;
              q[b++]=i;
           }

       }
       if(k>0)
       {
             cout<<k<<endl;
                i_for(b)
               {
                   cout<<q[i]+1<<" ";
               }
       }
       else
       {
           if(c<2)
           {
               cout<<"-1"<<endl;
           }
           else
            {
                cout<<"2"<<endl;
                i_for(2)
               {
                   cout<<p[i]+1<<" ";
               }
            }
       }
    }
}
