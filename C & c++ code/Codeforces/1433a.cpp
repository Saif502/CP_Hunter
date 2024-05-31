#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m,x;
    cin>>n;
    int temp=n,c=0,sum=0;
    while(temp!=0)
    {
        x=temp%10;
        temp=temp/10;
        c++;
        sum=sum+c;

    }
    int a=(x-1)*10;
    cout<<a+sum<<endl;
    }
}
