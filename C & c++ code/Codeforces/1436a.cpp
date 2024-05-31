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
        int x[n],i,j=0;
        for(i=0; i<n; i++)
        {
            cin>>x[i];
            j+=x[i];

        }
        if(j==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
/*
sort(x,x+n);
        float sum=0;

        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                sum=sum+(x[j]/j);
                cout<<sum<<endl;
            }
        }
       cout<<sum<<endl;
*/
