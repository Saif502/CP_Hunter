#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x,a;
    cin>>x>>a;
    int i,j,sum=0,c=0;
    for(i=0,j=0; i<n, j<n; i++,j++)
    {
        c=abs(x[i]-a[j]);
         if(c>5)
         {
             sum=sum+(10-c);
         }
         else{
            sum=sum+c;
         }
    }
    cout<<sum<<endl;


}


