#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,m;
        cin>>n>>m;

        int a[n][m],i,j;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
            sort(a[i],a[i]+m);
        }

        for(i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(j=0; j<m; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            else
            {
                for(j=m-1; j>=0; j--)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
