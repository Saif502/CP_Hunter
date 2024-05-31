#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],i;
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    int sum=0;
    for(i=0; i<n; i+=2)
    {
        sum=sum+(x[i+1]-x[i]);
    }
    cout<<sum<<endl;
}
