#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int x[n],q[n];

      int i,c=0,k=0,j;

      for(i=0; i<n; i++)
      {
            cin>>x[i];
      }

      for(i=0; i<n; i++)
      {
            c=0;
            for(j=i+1; j<n; j++)
            {
                 if(x[i]==x[j])
                  {
                        c=1;
                       continue;
                       i++;
                  }

            }
            if(c==0)
                  {
                       q[k]=x[i];
                          k++;
                  }


      }
       cout<<k<<endl;
      for(i=0; i<k; i++)
      {
            cout<<q[i]<<" ";
      }
      cout<<endl;

}
