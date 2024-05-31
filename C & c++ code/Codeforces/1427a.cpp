#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          int x[n];
          int sum=0,i;
          for(i=0; i<n; i++)
          {
               cin>>x[i];
               sum+=x[i];
          }
          sort(x,x+n);
          if(sum==0)
          {
               cout<<"NO"<<endl;
          }
          else
          {
                cout<<"YES"<<endl ;
                for(i=0; i<n; i++)
                {
                     cout<<x[i]<<" ";
                }
                cout<<endl;
          }
     }
}
