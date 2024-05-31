#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int x[n];
    for(i=0; i<n-1; i++)
    {
        cin>>x[i];
    }
    int sum=0,c=0;
    for(i=0; i<n-1;)
    {
       i=i+x[i];
       if(i==m-1)
       {
          cout<<"YES"<<endl;
          return 0;
       }

    }
      cout<<"NO"<<endl;


}
