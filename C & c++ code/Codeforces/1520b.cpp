#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            ll m,n,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999,x=0,y=0,z;
            ll i,j;
            cin>>n;
            c=1;
		while(n>=c)
		{
			k=n/c;
			if(k>9)
                  {
                        k=9;
                  }
			x+=k;
			c=c*10+1;
		}
		cout<<x<<endl;
      }
}
