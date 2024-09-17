// Problem: Extend to Palindrome
// Contest: Virtual Judge - UVA
// URL: https://vjudge.net/problem/UVA-11475
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
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


vector<int> lps(1000000);
 
void prefix_function(string pat)
{
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
    string s;
    while(cin>>s)
    { 
	    string p=s,z=s;
	    reverse(all(s));
	    s+="#";
	    s+=p;
	    reverse(all(p));
	    prefix_function(s);
	    //cout<<lps[s.size()-1]<<endl;
	    if(p==z)
	    {
	    	cout<<z<<endl;
	    }
	    else 
	    {
	    	cout<<z;
	    	for(ll i=lps[s.size()-1]; i<p.size(); i++)
			{
			   cout<<p[i];
			}
			nl;
	    }
	    
	    lps.clear();
    
    }
}