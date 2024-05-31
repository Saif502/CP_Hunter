#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
      int t,a,b;
      cin>>a>>b>>t;
      while(t--)
      {
             int m,n;
             cin>>m>>n;
             if(abs(m-n)<=b && m+n>=b && m+n<=2*a-b)
                {
                      cout<<"YES"<<endl;
                }
                else
                {
                      cout<<"NO"<<endl;
                }
      }
}
