#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<string.h>
#define ll long long int
#define i_for(n) for(ll i=0;i<n;i++)
#define ri_for(n) for(ll i=n-1;i>=0;i--)
#define for_i(n) for(ll i=1;i<=n;i++)
#define j_for(n) for(ll j=0;j<n;j++)
#define rj_for(n) for(ll j=n-1;j>=0;j--)
#define for_j(n) for(ll j=1;j<=n;j++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define end cout<<endl
#define out(n) cout<<n<<endl

using namespace std;

ll m,c=0,k=0,temp;
ll i,j;
int main()
{
    double n;
    cin>>n;
    double D=0;
    while(n)
    {
        D+=(1/n--);
    }
       printf("%.10f\n",D);

}

