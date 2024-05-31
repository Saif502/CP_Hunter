#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
    ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
    ll i,j;
    cin>>n>>k;
    ll x[k];

    for(i=0; i<k; i++)
    {
        cin>>x[i];
    }
    sum=(x[0]-1);

    for(i=0; i<k-1; i++)
    {
        if(x[i]<=x[i+1])
        {
            sum=sum+(x[i+1]-x[i]);
        }
        else
        {
            c=(n-x[i])+x[i+1];
            sum+=c;
        }
    }
    cout<<sum<<endl;
}
