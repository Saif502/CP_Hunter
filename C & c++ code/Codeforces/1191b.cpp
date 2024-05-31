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

#define out(n) cout<<n<<endl

using namespace std;


int main()
{
    ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0,t1,t2;
    ll i,j;
    string s;
    ll x[100000];
     ll P[3], Q[3],R[3];
    for(i=0; i<3; i++)
    {
        cin>>s;
        x[i]=s[0]-48;

       if(s[1]=='m')
       {

           P[c++]=s[0]-48;

       }
       else if(s[1]=='p')
       {

           Q[k++]=s[0]-48;
       }

       else if(s[1]=='s')
       {
           R[a++]=s[0]-48;
       }
    }

    b=max(max(c,k),a);
    sort(x,x+3);

     t1=x[1]-x[0],
     t2=x[2]-x[1];


    if(b==3)
    {
            if(t1==t2&&(t1==1||t1==0)) cout<<"0"<<endl;
            else if(t1==0||t1==1||t1==2||t2==0||t2==1||t2==2) cout<<"1"<<endl;
            else cout<<"2"<<endl;
    }
    else if(b==2)
    {
        if(b==c)
        {
            if(abs(P[1]-P[0])==0 || abs(P[1]-P[0])==1 || abs(P[1]-P[0])==2) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
        else if(b==k)
        {
            if(abs(Q[1]-Q[0])==0 || abs(Q[1]-Q[0])==1 || abs(Q[1]-Q[0])==2) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
        else
        {
            if(abs(R[1]-R[0])==0 || abs(R[1]-R[0])==1 || abs(R[1]-R[0])==2) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }


    }
    else
    cout<<"2"<<endl;

}
