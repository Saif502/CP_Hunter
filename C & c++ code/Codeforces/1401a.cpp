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
    if(a>b)
    {
        if((a-b)%2==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
    else
    {
        cout<<b-a<<endl;
    }
    }
}
