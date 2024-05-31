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
            ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999;
      cin>>m>>n>>a>>b;
      if(m==a)
      {
            cout<<abs(n-b)<<endl;
      }
      else if(n==b)
      {
            cout<<abs(m-a)<<endl;
      }
      else
      {
            cout<<(abs(n-b)+abs(m-a))+2<<endl;
      }
     }
}
