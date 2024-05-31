#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
           int a,b;
    cin>>a>>b;
    if(a==0 || b==0)
    {
        cout<<"0"<<endl;
    }
    else if(a*2<=b)
    {
         cout<<a<<endl;
    }
    else if(b*2<=a)
    {
         cout<<b<<endl;
    }
    else
    {
        cout<<(a+b)/3<<endl;
    }
    }
}
