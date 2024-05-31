#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
             int n;
    cin>>n;
    int x[n];

    int i,c=0,l;
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }

    sort(x,x+n);

    for(i=0; i<n-1; i++)
    {
        if(x[i]==x[i+1])
        {
            c++;
        }
    }

    cout<<n-c<<endl;
     }


}
