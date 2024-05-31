#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n,m;
            cin>>n>>m;
            int x[n];
            int i,c=0,k=0,s=0;
            for(i=0; i<n; i++)
            {
                  cin>>x[i];

            }
            for(i=0; i<n; i++)
            {
                  s+=x[i];
                  if(s==m)
                  {
                        swap(x[i],x[i+1]);
                  }
            }
            if(s!=m)
            {
                  cout<<"YES"<<endl;
                 for(i=0; i<n; i++)
                 {
                       cout<<x[i]<<" ";
                 }
                 cout<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

      }
}
