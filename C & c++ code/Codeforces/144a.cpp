#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0,x;
      ll i,j;
      cin>>n;
      ll x[n],p[n];

      for(i=0; i<n; i++)
      {
            cin>>x[i];
      }

       for(i=0; i<n; i++)
       {
             if(x[i]>MAX)
             {
                   MAX=x[i];
                   a=i+1;
             }

             if(x[i]<=MIN)
             {
                   MIN=x[i];
                   b=i+1;
             }
       }

       if(a>b)
       {
             b=b+1;
       }
       cout<<(a-1)+(n-b)<<endl;




}
