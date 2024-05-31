#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,max=10000;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(b<max)
        {
            max=b;
            sum=sum+a*b;
        }
        else
        {
            sum=sum+(a*max);
        }
    }
    cout<<sum<<endl;

}
