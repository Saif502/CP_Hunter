#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,j;

    cin>>n;

    int ara[100],ara1[100],sum=0,c=0,res=0;

    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }

    sort(ara,ara+n);

    for(i=n-1,j=0; i>=0; i--,j++)
    {
        ara1[j]=ara[i];
    }

    for(i=0; i<n; i++)
    {
        c++;
        res+=ara1[i];
        if(res>(sum/2))
        {
            break;
        }

    }

    cout<<c<<endl;

    return 0;
}
