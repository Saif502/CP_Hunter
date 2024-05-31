#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,y=0, i, j, z;
    cin>>n;
    int x[n];
    for( i=0; i<n; i++)
    {
        cin>>x[i];
        y=y+x[i];


    }
    z=y/(n/2);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            s=x[i]+x[j];
            if(s==z)
            {
                cout<<i+1<<" "<<j+1<<endl;
                x[j]=9999;
                break;

            }


        }
    }
}
