#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i;
        cin>>n;
        int x[n];
        for(i=1; i<=n; i++)
        {
            x[i-1]=pow(2,i);
        }

        int sum=x[n-1];

        int m=(n/2)-1;

        for(i=0; i<m; i++)
        {
            sum=sum+x[i];
        }

        int sum1=0;

        for(i=m; i<n-1; i++)
        {
            sum1=sum1+x[i];
        }

        cout<<abs(sum-sum1)<<endl;

    }

}
