#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,c=0;
    for(i=1; i<=n/2; i++)
    {
        if((n-i)%i==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
