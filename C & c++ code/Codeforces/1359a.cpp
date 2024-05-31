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
            ll m,n,c=0,k=0,a=0,b=0,temp;
            ll i,j;
            cin>>m>>n>>k;
            if(m/k>=n)
            {
                  cout<<n<<endl;
            }
            else
            {

                  a=m/k;
                  c=(n-a);
                  if(c%(k-1)==0)
                  {
                        c=c/(k-1);
                  }
                  else
                  {
                      c=(c/(k-1))+1;
                  }
                  cout<<abs(a-c)<<endl;
            }


      }
}
