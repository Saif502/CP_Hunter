#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,T;
    cin>>T;
    while(T--)
    {
           cin>>a>>b;
    x=max(a,b);
    y=min(a,b);

    if(y*2>x)
    {
        cout<<(y*2)*(y*2)<<endl;
    }
    else
    {
        cout<<x*x<<endl;
    }

    }



}
