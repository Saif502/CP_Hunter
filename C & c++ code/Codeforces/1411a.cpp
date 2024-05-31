#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
      ll i,j;
      int t;
      cin>>t;
      while(t--)
      {
          cin>>n;
          string x;
          cin>>x;
          c=0;
          for(i=x.size()-1; i>=0; i--)
          {
              if(x[i]==')')
              {
                  c++;
              }
              else
                break;
          }
          if(n/2>=c)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              cout<<"YES"<<endl;
          }
      }
}
