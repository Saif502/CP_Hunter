#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      ll m,n,c=0,k=1,a=0,b=0,temp;
      cin>>n;
      ll x[n],p[n],i,j;

      for(i=0; i<n; i++)
      {
            cin>>x[i];
            if(x[i]>0)
            {
                  p[a++]=x[i];
            }
      }
      sort(p,p+a);

      for(i=0; i<a-1; i++)
      {
            if(p[i]!=p[i+1])
            {
                  c++;

            }
            else
            {
                  k=1;
            }
      }
      cout<<c+k<<endl;




}
