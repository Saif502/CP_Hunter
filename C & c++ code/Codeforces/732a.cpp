#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=0,i;

    for(i=1; i<=9; i++)
    {
      x=x+(a*i);

      if(x%10==0 || x%10==b)
      {
          cout<<i<<endl;
          break;
      }
      else
      {
          x=0;
      }
    }
}
