#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b, s, x,m;
    cin>>a>>b;
    int sum=a;
    while(a/b != 0)
    {
        s=(a%b);
        x=(a/b);

        sum=sum+x;
        a=s+x;

    }
    cout<<sum<<endl;
}
