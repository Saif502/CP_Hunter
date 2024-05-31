#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,k=0;
    cin>>n;
    int x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i];

    }
   int mx=x[0],mn=x[0];

    for(i=0; i<n; i++)
    {

     if(x[i]>mx)
     {
         mx=x[i];
         c++;
     }
     if(x[i]<mn)
     {
         mn=x[i];
         k++;
     }

    }
    cout<<c+k<<endl;

}
