#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long int m,n;
            cin>>n>>m;
            if(n>2)
            {
                  if(m%2==0)
                  {

                        cout<<(m/2)*4<<endl;
                  }
                  else
                  {
                        long long int x=(m/2);
                        cout<<(x*2)+((x+1)*2)<<endl;
                  }
            }
            else if(n==1)
            {
                  cout<<"0"<<endl;
            }
            else
            {
                  cout<<m<<endl;
            }
      }
}
