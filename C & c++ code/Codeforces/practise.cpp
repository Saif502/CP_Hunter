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
#define nd cout<<endl
#define out(n) cout<<n<<endl

using namespace std;

ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,sum=0;
ll i,j;

int main()
{
    unordered_map<string,int> m;
    /*
    m[1]="abs";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"xyz"});
    cout<<m.size()<<endl;
    auto it=m.find(7);

    if(it!=m.end()) m.erase(it);

    m.clear();

    if(it==m.end())
    {
        no;
    }
    else cout<<(*it).first<<" "<<(*it).second<<endl;
    */


    cin>>n;
    i_for(n)
    {
        string s;
        cin>>s;
        m[s]++;
    }

    for(auto &pr : m)
    {
         if(pr.second==1) cout<<"OK"<<endl;
         else cout<<pr.first<<pr.second-1<<endl;
    }

    /*unordered_map<string,int> m;
     cin>>n;
    i_for(n)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }*/
}
