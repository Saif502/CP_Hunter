#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
                long long int a,b,c,x=-1,y=-1;
      cin>>a>>b>>c;
      if(a<c)
      {
          x=1;
      }
      if(a*b>c)
      {
          y=b;
      }
     cout<<x<<" "<<y<<endl;
      }
}
