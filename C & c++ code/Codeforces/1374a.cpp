#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,n,s,t,T;
    cin>>T;

    while(T--)
    {
    cin>>a>>b>>n;
       s=n/a;
       t=n%a;
       if(t<b)
       {
           s=s-1;
       }
       else{
        s=s;
       }
       cout<<(s*a)+b<<endl;

    }


}
