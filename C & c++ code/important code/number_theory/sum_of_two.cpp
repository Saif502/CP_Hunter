//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<iterator>
#include<string.h>
#define         ll             long long int
#define         ld               long double
#define         F                first
#define         S                second
#define         mp               make_pair
#define         MOD              1000000007
#define       i_for(n)         for(ll i=0;i<n;i++)
#define       for_i(n)         for(ll i=1;i<=n;i++)
#define       j_for(n)         for(ll j=0;j<n;j++)
#define       for_j(n)         for(ll j=1;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       Srt(a)           sort(all(a))
#define       rev(a)           reverse(all(a))
#define       max3(a,b,c)      max(a,max(b,c))
#define       min3(a,b,c)      min(a,min(b,c))
#define       pb               push_back
#define       nl               cout<<endl
#define       lrg(x,y)         ((x+y-1)/y)
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)

#define       min_heap         priority_queue <ll, vector<ll>, greater<ll> >
#define       Ex()             cerr<<"[Execution : "<<(1.0*clock())/CLOCKS_PER_SEC<<"s]"<<endl
//#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 //order_of_key,find_by_order
   
using namespace std;

ll i,j;
#define  M  9999999
bool num[M];
vector<ll>prime;
ll n=1000005;
void isPrime()
{
    num[2]=true;
    ll s=sqrt(n)+1;
    for(i=3; i<=s; i+=2)
    {
        if(num[i]==false)
            for(j=i*i; j<=n; j+=i+i)
                num[j]=true;
    }
    prime.pb(2);
    num[2]=0;
    for(i=3; i<=n; i+=2)
    {
    	num[i+1]=1;
        if(num[i]==false)prime.pb(i);
        else num[i]=1;
    }
}
int main()
{
    ll x;
    isPrime();
    while(cin>>x)
    {
    	if(x==0)return 0;
        i_for(sqrt(x)+1)
        {
        	ll c=x-prime[i];
        	if(num[c]==0)
        	{
        		//yes;
        		cout<<x<<" = "<<prime[i]<<" + "<<c<<endl;
        		break;
        	}
        }
    }

}