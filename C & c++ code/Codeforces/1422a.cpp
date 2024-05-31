#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long int a,b,c;
            cin>>a>>b>>c;
            long long int d=(a*a+b*b+c*c);
            long long int x=sqrt(d);
            cout<<x+1<<endl;
      }
}
