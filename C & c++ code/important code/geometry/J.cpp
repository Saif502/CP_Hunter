// Problem: J - J
// Contest: Virtual Judge - Clone of a Coding Round
// URL: https://vjudge.net/contest/637325?fbclid=IwZXh0bgNhZW0CMTAAAR0ueKUCep_PT42USIJf1O0RfrG7wSPTUIRDaQWHyQ2JXQeqha8ZkcSElX0_aem_MRcyn7WYUWBI9_l3iL0l2g#problem/J
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define         ll             long long int
#define         F                first
#define         S                second
#define         MOD              1000000007
#define       i_for(a,n)       for(ll i=a;i<n;i++)
#define       j_for(a,n)       for(ll j=a;j<n;j++)
#define       yes              cout<<"YES"<<endl
#define       no               cout<<"NO"<<endl
#define       all(a)           a.begin(),a.end()
#define       pb               push_back
#define       nl               cout<<endl
#define       lcm(a,b)         (a*b)/__gcd(a,b)
#define       endl             '\n'
#define       start()          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define       upd(n)           cout<< fixed << setprecision(10) <<(n)<< endl




using namespace std;

int main()
{
    start() 
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
    	
    	double x1, y1, r1, x2, y2, r2, ans=0.0;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        cout << "Case " << tt++ << ": ";
        
        double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        
        if(d>=r1+r2)
        {
        	 upd(ans);
        	 continue;
        }
        if (d <= abs(r1 - r2))
        {
	         double r_min = min(r1, r2);
	         ans = 2*acos(0.0) * r_min * r_min;
	         upd(ans);
	         continue;
        }
        
	    double ang1 = 2 * acos(((r1*r1) + (d * d) - (r2*r2)) / (2 * r1 * d));
	    double ang2 = 2 * acos(((r2*r2) + (d * d) - (r1*r1)) / (2 * r2 * d));
	
	    double area1 = 0.5 * (r1*r1) * (ang1 - sin(ang1));
	    double area2 = 0.5 * (r2*r2) * (ang2 - sin(ang2));
        
        ans=area1+area2;
        upd(ans);
       
       
      
    }

}