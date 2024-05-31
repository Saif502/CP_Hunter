// Problem: Palindromic Naming Convention
// Contest: Toph
// URL: https://toph.co/p/palindromic-naming-convention
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
    ll t;
    cin>>t;
    while(t--)
    {
    	string s;
	    cin>>s;
	    string p=s,z=s;
	    
	    s+="#";
	    reverse(all(p));
	    s+=p;
	    cout<<s<<endl;
	
	    prefix_function(s);
	    cout<<z.size() - lps[s.size()-1]<<endl;
	   
	    /*for(ll i=0; i<s.size(); i++)cout<<lps[i]<<" ";
	    nl;*/
	    lps.clear();
    
    }
}
/*bool check(int i, int j, string s)
{
	while(i<j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		else return false;
	}
	return true;
}
int main()
{
	start() 
    ll t;
    cin>>t;
    while(t--)
    {
    	string s;
	    cin>>s;
	    ll n=s.size();
	    if(n==1)
	    {
	    	cout<<s<<" "<<s<<endl;
	    	continue;
	    }
	    i_for(1,n-1)
	    {
	    	if(check(i,n-1,s))
	    	{
	    		string k=s.substr(0,i);
	    		reverse(all(k));
	    		cout<<s<<" "<<k<<endl;
	    		break;
	    	}
	    }
	    
    }
}*/