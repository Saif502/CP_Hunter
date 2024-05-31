#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(abs(n-k)<2)
        {
            cout<<n+k<<endl;
        }
        else
        {
            int x=max(n,k);
            cout<<2*x-1<<endl;

        }
    }
}
