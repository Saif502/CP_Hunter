#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n][n];
    int i,j;
    for(i=0; i<n; i++)
    {
        x[i][0]=1;
        x[0][i]=1;
    }
    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            x[i][j]=x[i-1][j]+x[i][j-1];
        }
    }
    cout<<x[n-1][n-1]<<endl;
}
