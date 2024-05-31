#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,i;
    cin>>n;

    while(n--)
    {

        cin>>x;
        long long int a[x], c=0;
        for(i=0; i<x; i++)
        {
            cin>>a[i];
        }
        sort(a,a+x);

        for(i=0; i<x-1; i++)
        {

            if(a[i+1]-a[i]>1)
            {
                ++c;

            }
        }
        if(c>0)
            cout<<"NO\n";

        else
            cout<<"YES\n";
    }

}
