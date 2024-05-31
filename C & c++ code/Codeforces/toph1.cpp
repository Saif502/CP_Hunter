#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(1)
    {
       int x=__gcd(n,i);
       if(x==1)
       {
           cout<<i<<endl;
           break;
       }
       i++;
    }
}
