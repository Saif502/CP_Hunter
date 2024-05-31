#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x;
    cin>>n>>m>>a>>b;

    if(m*a<=b)
    {
        cout<<n*a<<endl;
    }
    else
    {
        x=min((n%m)*a,b);
        cout<<x+(n/m)*b<<endl;
    }
}
