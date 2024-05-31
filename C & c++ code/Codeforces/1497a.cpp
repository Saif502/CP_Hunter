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
            int x[n],q[n];
            int i,j,c,k;
            for(i=0; i<n; i++)
            {
                  cin>>x[i];
            }
            sort(x,x+n);
            c=0;
            for(i=0; i<n; i++)
            {
                  if(x[i]!=x[i+1])
                  {
                        cout<<x[i]<<" ";
                  }
                  else
                  {
                        q[c++]=x[i];
                  }
            }
            for(i=0; i<c; i++)
            {
                cout<<q[i]<<" " ;
            }
            cout<<endl;

      }
}
