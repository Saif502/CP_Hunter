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
    cin>>m>>n>>c>>k;
    x=__gcd(c,k);
    c=c/x;
    k=k/x;
    cout<<min(m/c,n/k)<<endl;
}
