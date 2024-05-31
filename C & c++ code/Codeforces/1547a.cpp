#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define       ll             long long int
#define       i_for(n)       for(ll i=0;i<n;i++)
#define       ri_for(n)      for(ll i=n-1;i>=0;i--)
#define       for_i(n)       for(ll i=1;i<=n;i++)
#define       j_for(n)       for(ll j=0;j<n;j++)
#define       rj_for(n)      for(ll j=n-1;j>=0;j--)
#define       for_j(n)       for(ll j=1;j<=n;j++)
#define       yes            cout<<"YES"<<endl
#define       no             cout<<"NO"<<endl
#define       all(a)         a.begin(),a.end()
#define       Srt(a)         sort(all(a))
#define       rev(a)         reverse(all(a))
#define       srt(a,n)       sort(a,a+n)
#define       sqr(x)         pow(2,x)
#define       max2(a,b)      max(a,b)
#define       min2(a,b)      min(a,b)
#define       max3(a,b,c)    max(a,max(b,c))
#define       min3(a,b,c)    min(a,min(b,c))
#define       ci(n)          cin>>n
#define       ot(n)          cout<<n<<endl
#define       nl             cout<<endl
#define       upd(n)         cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)       (a*b)/__gcd(a,b)

using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0,f;
ll i,j;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       c=0,k=0,f=0;
       ll x[3][2];
       i_for(3)
       {
           j_for(2)
           {
               cin>>x[i][j];
           }
       }
       if(x[0][0]==x[1][0] && x[1][0]==x[2][0])
       {
           c=max(max(x[0][1],x[1][1]),x[2][1]);
           k=min(min(x[0][1],x[1][1]),x[2][1]);
           f=x[2][1];
           if(c==f || k==f)
           {
               cout<<abs(x[0][1]-x[1][1])<<endl;
           }
           else
           {
               cout<<abs(x[0][1]-x[1][1])+2<<endl;
           }
       }
       else if(x[0][1]==x[1][1] && x[1][1]==x[2][1])
       {
           c=max(max(x[0][0],x[1][0]),x[2][0]);
           k=min(min(x[0][0],x[1][0]),x[2][0]);
           f=x[2][0];
           if(c==f || k==f)
           {
               cout<<abs(x[1][0]-x[0][0])<<endl;
           }
           else
           {
               cout<<abs(x[1][0]-x[0][0])+2<<endl;
           }
       }
       else
       {
           cout<<abs(x[1][0]-x[0][0])+abs(x[0][1]-x[1][1])<<endl;
       }

   }
}



