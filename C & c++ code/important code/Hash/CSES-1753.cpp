// Problem: String Matching
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1753
// Memory Limit: 512 MB
// Time Limit: 1000 ms
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

/*ll p[maxn],p1[maxn],Hash[maxn],Hash1[maxn],revHash[maxn],base=10,base1=337;

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
		 Hash1[i]=(Hash1[i-1]*base+(ll)(s[i-1]-'a'+1))%MOD; //hash
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
    
    string s,t;
    cin>>s>>t;
    ll n1=s.size(),n2=t.size();
    ll t_hash=0,s_hash=0;
    for(ll i = 0; i < n2; i++)
    {
       t_hash =( t_hash * base + (t[i]-'a'+1) ) % MOD;
    }
    build_Hash(s,n2);
    ll ans=0;
    if(t_hash==Hash[n2])ans++;
    for(ll i = n2+1,j=2; i <=n1; i++,j++)
    {
    	 Hash[i]=(Hash[i-1]*base+(ll)(s[i-1]-'a'+1))%MOD;
    	 if(get_hash(j,i)==t_hash)ans++;
    }
    cout<<ans<<endl;
  
}*/
 
 vector<int> lps(10000000);
 
 void prefix_function(string pat){
		lps[0]=0;
		int m=pat.size();
		for(int i=1;i<m;i++){
			int j=lps[i-1];
	        while(j>0 && pat[i]!=pat[j])
	            j = lps[j-1];
	        if (pat[i]==pat[j])  ++j;
	        lps[i]=j;
		}
		//return lps;
	}
	
int main()
{
    start() 
    
    string s,t;
    cin>>s>>t;
    string p=t;
    t+="#";
    t+=s;
   // cout<<t<<endl;
    prefix_function(t);
    ll ans=0;
   for(ll i=0; i<t.size(); i++)
   {
   	cout<<lps[i]<<" ";
   	if(lps[i]==p.size())ans++;
   }
   cout<<ans<<endl;
   

}
