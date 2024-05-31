#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int x[n];

    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    int sum=0;

    for(i=0; i<n-1; i++)
    {
        sum=sum+(x[n-1]-x[i]);
    }
    cout<<sum<<endl;
}
