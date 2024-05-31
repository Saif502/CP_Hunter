#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int i, n,k,l,x;
    cin>>n>>k;
    if(n%2==0)
    {
        cout<<n+(k*2)<<endl;
    }
    else
    {
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
           l=i;
           break;
        }
    }

      x=((k-1)*2)+(n+l);
      cout<<x<<endl;
    }

    }

}
