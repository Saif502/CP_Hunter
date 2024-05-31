// Problem: Palindromist
// Contest: Toph
// URL: https://toph.co/p/palindromist
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>

typedef       long long int       ll;
typedef      unsigned long long   ull;
#define         F                first
#define         S                second
#define         MOD              1000000007
#define         MOD1             1000000007
#define         maxn              999999
#define       i_for(a,n)       for(ll i=a;i<=n;i++)
#define       j_for(a,n)       for(ll j=a;j<=n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

using namespace std;

ll p[maxn],p1[maxn],Hash[maxn],revHash[maxn],base=10003193,base1=337;

void prework()
{
    p[0]=p1[0]=1;
    for(ll i = 1; i <=999990; i++)
    {
        p[i] = (p[i-1] * base) % MOD;
        p1[i] = (p1[i-1] * base1) % MOD1;
    }
}
void build_Hash(string s,ll n){
	
	string t=s;
	reverse(all(t));
	for(int i=1;i<=n;i++){
		 Hash[i]=(Hash[i-1]*base+(ll)(s[i-1]-'a'+1))%MOD; //hash
		 revHash[i]=(revHash[i-1]*base+(ll)(t[i-1]-'a'+1))%MOD; ///reverse hash
		 //cout<<i<<" "<<Hash[i]<<endl;
	}
}
ll get_hash(ll a, ll b){//1based
	return (Hash[b] - (Hash[a - 1] * p[b - a + 1]) % MOD + MOD) % MOD;
}
ll get_rev_hash(ll a, ll b, ll n){
	int x=n-b+1; int y=n-a+1;
	return (revHash[y] - (revHash[x - 1] * p[y - x + 1]) % MOD + MOD) % MOD;
}
void clr(ll n)
{
	for(ll i=0;i<=n;i++){
		Hash[i]=revHash[i]=0;
	}
}
int main()
{
    start() 
    prework();
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	string s;
		cin>>s;
		ll n=s.size();
		build_Hash(s,n);
		cout<<Hash[n]<<endl;
		ull fr=Hash[n], bk=revHash[n];
		
		ll q;
		cin>>q;
		cout<<"Case "<<tt++<<":\n";
		while(q--)
		{
			char type, ch;
            int add;
            cin>>type>>ch>>add;
           while(add--)
            {
              if(type == 'R') 
              {
                fr = (fr * base + (ch-'a'+1)) % MOD;
                bk = (bk + p[n] * (ch-'a'+1)) % MOD;
                n++;
              }
              else
              {
                bk = (bk * base + (ch-'a'+1)) % MOD;
                fr = (fr + p[n] * (ch-'a'+1)) % MOD;
                n++;
              }
             // cout<<fr<<" "<<bk<<endl;
            }
            if(fr == bk)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
		}
	 clr(n);
    }
    
    
}