#include<bits/stdc++.h>
#define co(n) cout<<n
#define ci(n) cin>>n
#define ed cout<<endl
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0,k=0,i;
    ll x[100000] ;
    for(i=0; i<=s.size(); i++)
    {
        if(s[i]=='B')   c++;
        else
        {
            if(c>0)  x[k++]=c;
            c=0;


        }

    }
    cout<<k<<endl;
    for(i=0; i<k; i++) cout<<x[i]<<" ";
    cout<<endl;
}
