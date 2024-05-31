#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>k>>n;
   int x[n];
   int i,a,b;
   for(i=0; i<n; i++)
   {
       cin>>x[i];
   }
   sort(x,x+n);
   a=x[k-1]-x[0];
   for(i=k; i<=n; i++)
   {
       b=abs(x[i-1]-x[i-k]);
       a=min(a,b);
   }
   cout<<a<<endl;
}
