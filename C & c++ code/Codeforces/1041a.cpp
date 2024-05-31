#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
      long long int n;
      cin>>n;
      long long int x[n];
      for(int i=0; i<n; i++)
      {
            cin>>x[i];
      }
      sort(x,x+n);
      int c=0,q=0,sum=0;
      for(int i=0; i<n-1; i++)
      {
          q=(x[i+1]-x[i]);
          if(q>1)
          {
            sum=sum+q;
            q=0;
            c++;
          }
      }
      cout<<sum-c<<endl;
}
