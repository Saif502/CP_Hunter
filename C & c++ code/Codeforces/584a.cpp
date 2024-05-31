#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,k,x,a,b;
    cin>>n>>k;
      if(n==1 && k==10)
      {
          cout<<"-1"<<endl;
      }
      else if(k<10)
      {
          for(int i=1; i<=n; i++)
          {
              cout<<k;
          }
      }
      else
      {
          cout<<"1";
         for(int i=2; i<=n; i++)
          {
              cout<<"0";
          }
      }
}
