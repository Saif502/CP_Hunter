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

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0,l;
ll i,j;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        c=0,k=0;
        l=s.size();
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='A') c++;
            else if(s[i]=='B' && c>0)
            {
                l-=2;
                c--;
            }
            else
            {
                 k++;
                 if(k>=2)
                 {
                     k-=2;
                     l-=2;
                 }
            }
        }
        cout<<l<<endl;
    }
}
