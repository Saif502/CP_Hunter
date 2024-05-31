#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    int i;
    for(i=0; i<=b; i++)
    {
        int x=b-(i*i);
        int y=i+(x*x);
        if(y==a && x>=0 )
        {
            c++;
        }

    }
    cout<<c<<endl;
}
