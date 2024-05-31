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
        cin>>n>>m>>c>>k;
       b=0;
       a=0;
       if(n<=m)
       {
           cout<<m<<endl;
       }
       else
       {
           if(c>k)
           {
              a=c-k;

              if((n-m)%a==0)
              {
                  b=((n-m)/a)*c;

                  cout<<b+m<<endl;
              }
              else{
                 b=((n-m)/a)+1;

                 cout<<(b*c)+m<<endl;
              }

           }
           else{
                cout<<"-1"<<endl;
              }
       }

    }

}
