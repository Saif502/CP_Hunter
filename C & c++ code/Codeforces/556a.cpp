#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     char x[n];
     int i,c=0,k=0;
     for(i=0; i<n; i++)
     {
          cin>>x[i];

          if(x[i]=='1')
          {
               c++;
          }
          else
          {
               k++;
          }
     }

     cout<<abs(c-k)<<endl;
}
