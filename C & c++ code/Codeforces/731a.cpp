#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
      string x;
      cin>>x;
      int i,c=0,k=abs('a'-x[0]);
      int sum=0;
      for(i=0; i<x.size()-1; i++)
      {
          c=abs(x[i]-x[i+1]);
          if(c>=13)
          {
                sum+=(26-c);
                c=0;
          }
          else
          {
                sum+=c;
                c=0;
          }
      }
      if(k>=13)
      {
              cout<<sum+(26-k)<<endl;
              return 0;
      }
            cout<<sum+k<<endl;

}
