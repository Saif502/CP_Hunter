#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        while(k--)
        {
            for(int i=1; i<n; i++)
            {
                if(a[i]!=0)
                {
                    a[i]--;
                    a[i+1]++;
                }
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
            cout<<endl;
    }
}
