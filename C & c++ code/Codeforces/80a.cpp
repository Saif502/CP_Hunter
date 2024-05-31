#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,m;
      cin>>n>>m;
      int i,c=0,k=0,j;
      int a=0,b=0;

      for(i=2,j=2; i<=n/2,j<=m/2; i++,j++)
      {
            if(n%i==0)
            {
                  a++;
            }
            if(m%j==0)
            {
                  b++;
            }
      }

        if(a==0 && b==0)
        {
          for(i=n+1; i<m; i++)
           {
            for(j=2; j<=i; j++)
                  {
                        if(i%j==0)
                        {
                           c++;
                        }

                   }
                  if(c==1)
                  {
                    k++;
                    c=0;

                  }
                  else
                  {
                        c=0;
                  }
            }

            if(k==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                  cout<<"NO"<<endl;
            }

      }
      else
      {
            cout<<"NO"<<endl;
      }







}
