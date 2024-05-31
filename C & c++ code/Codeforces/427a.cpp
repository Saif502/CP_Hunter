#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
     ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999;
      ll i,j=0,sum=0;
     cin>>n;
     ll x[n];
     for(i=0; i<n; i++)
     {
         cin>>x[i];
     }
      for(i=0; i<n; i++)
     {
         if(x[i]>0)
         {
            sum+=x[i];
         }
        else
        {
            if(sum>0)     //-1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1
            {
                sum--;
            }
            else
            {
                c++;
            }
        }

     }
     cout<<c<<endl;

}
