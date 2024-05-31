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

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int sum1=0,sum2=0;
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=2; i<=n; i+=2)
            {
                sum1+=i;
               cout<<i<<" ";
            }
            for(j=1; j<n-1; j+=2)
            {
                sum2+=j;
               cout<<j<<" ";
            }
            cout<<sum1-sum2<<endl;


        }


    }

}

