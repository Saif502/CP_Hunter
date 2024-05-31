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
        cin>>n>>m;
       string s;
       cin>>s;
       c=0,k=0,a=0,b=0;
       i_for(s.size())
       {
           if(s[i]=='R') c++;
           else  if(s[i]=='U') a++;
           else  if(s[i]=='L') k++;
           else b++;
       }

       if(n>=0 && m>=0)
       {
           if(c>=n && a>=m ) yes;
           else no;
       }
       else if(n<0 && m<0)
       {
           if(k>=abs(n) && b>=abs(m)) yes;
           else no;
       }
       else if(n>=0 && m<=0)
       {
           if(c>=n && b>=abs(m)) yes;
           else no;
       }
       else if(n<=0 && m>=0)
       {
           if(k>=abs(n) && a>=m) yes;
           else no;
       }


    }

}
