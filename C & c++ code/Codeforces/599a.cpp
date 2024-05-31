#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,y,c1,c2,c3,c4,s,k,z;
    cin>>x>>a>>y;
    c1=x+a+y;
    c2=2*x+2*a;
    c3=2*a+2*y;
    c4=2*x+2*y;
    s=min(c1,c2);
    k=min(s,c3);
    z=min(k,c4);
    cout<<z<<endl;

}
