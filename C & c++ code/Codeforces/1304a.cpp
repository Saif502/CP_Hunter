#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=abs(a-b);
        int p=c+d;
        if(x%p==0)
        {
            cout<<x/p<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
