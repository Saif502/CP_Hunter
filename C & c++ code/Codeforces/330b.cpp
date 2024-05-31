#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;

int main()
{
        ll i,j,m,n,c=0,k=0,a,b,temp,MAX=0,MIN=999999999,sum=0;
        int x[100000];
         cin>>n>>m;
         for(i=0; i<m; i++)
         {
             cin>>a>>b;
             x[a]++;
             x[b]++;
         }
          for(i=1; i<=n; i++)
          {
                if(x[i]==0)
                {
                      c=i;
                      break;
                }
          }
          cout<<n-1<<endl;
          for(i=1; i<=n; i++)
          {
                if(i==c) continue;
             cout<<c<<" "<<i<<endl;
          }

}
