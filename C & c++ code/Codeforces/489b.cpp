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

    int k,j;
    cin>>k;
    int a[k];
    for(j=0; j<k; j++)
    {
        cin>>a[j];
    }
    sort(a,a+k);
    int c=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<k; j++)
        {
                if(abs(x[i]-a[j])<=1)
                {
                    c++;
                    a[j]=9999999;
                    break;

                }
        }

    }
    cout<<c<<endl;

}
