#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            ll n,c=0,k=0,m=0,a=0,b=0;
            ll i,j;
            cin>>n;
            ll x[n];
            for(i=0; i<n; i++)
            {
                  cin>>x[i];

                  if(x[i]%3==0) c++;
                  else if(x[i]%3==1) m++;
                  else k++;
            }

      a=min(m,k);
      c+=a;
      m-=a;
      k-=a;
      c+=m/3;
      c+=k/3;

      cout<<c<<endl;
      }

}
