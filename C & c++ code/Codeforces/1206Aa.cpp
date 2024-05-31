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

    int k;
    cin>>k;
    int a[k],j;
    for(j=0; j<k; j++)
    {
        cin>>a[j];
    }
    sort(a,a+k);
    cout<<x[n-1]<<" "<<a[k-1]<<endl;
}
