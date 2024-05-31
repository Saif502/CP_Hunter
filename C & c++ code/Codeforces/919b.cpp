#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
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
    cin>>n;
    int x;
    k=0,sum=0,c=0;
    i=19;
    while(1)
    {

       temp=i;
       while(temp!=0)
       {
          sum=sum+(temp%10);
          temp=temp/10;

       }
       if(sum==10)
       {
           ++c;

            if(c==n)
           {
               cout<<i<<endl;
               break;
           }
          sum=0;
       }
       sum=0;
       i=i+9;


    }


}
