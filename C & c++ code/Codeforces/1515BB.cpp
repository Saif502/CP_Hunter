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
          ll n,x,c,k;
          cin>>n;
          x=sqrt(n) ;
          c=sqrt(2*n);
          if(n%2==0 && (x*x==n || c*c==2*n))
          {
                cout<<"YES"<<endl;
          }
          else
          {
                cout<<"NO"<<endl;
          }
    }

}
