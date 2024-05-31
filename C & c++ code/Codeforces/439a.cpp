#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int x[n],i,sum=0;
    for(i=0; i<n; i++)
    {
        cin>>x[i];
        sum=sum+x[i];
    }

    if(((n-1)*10)+sum>d)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int p=d-sum;
        cout<<p/5<<endl;
    }
}
