#include <bits/stdc++.h>
using namespace std;
#define pcase(x) printf("Case %d: ", x)
#define mx 100005
#define ll long long
#define MOD 1000000007
char st[100005];
ll prm = 103;
ll pw[100005];
map<ll, ll> mp, mp2;

int main()
{
    int t, tst = 1;
    int n, m;
    pw[0] = 1;
    for(ll i = 1; i<mx; i++) pw[i] = pw[i-1] * prm;
    scanf("%d %d", &n, &m);
    for(int i = 0; i<n; i++)
    {
        scanf("%s", &st);
        ll z=strlen(st);
        ll hash0 = 0;
        for(int i = 0; st[i]; i++)
            hash0 += (st[i]-'a') * pw[i];

        mp2[hash0] ++;
        for(int i = 0; st[i]; i++)
        {
        	mp[hash0 - (st[i]-'a')*pw[i]]++;
        	cout<<hash0 - (st[i]-'a')*pw[i]<<endl;
        }
                
       //cout<<i<<" "<<hash0<<endl;
    }
   
    cout<<mp.size()<<"\n\n";
    ll ans = 0;
    for(auto x : mp)
    {
    	cout<<x.first<<' '<<x.second<<endl;
    	//ans += (x.second * (x.second-1))/2ll;
    }
    cout<<'\n';
        
    for(auto x : mp2)
    {
    	cout<<x.first<<' '<<x.second<<endl;
       // ans -= (x.second * (x.second-1))/2ll * m;
    }
    printf("%lld\n", ans);
    return 0;
}