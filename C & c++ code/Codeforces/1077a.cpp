#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
    ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0,x;
    ll i,j;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            c=k/2;
            sum=(a*c)-(b*c);
        }
        else
        {
            c=(k/2)+1;
            sum=(a*c)-(b*(c-1));
        }
        cout<<sum<<endl;

    }
}
