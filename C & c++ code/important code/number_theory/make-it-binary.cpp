// Problem: Make it binary
// Contest: HackerRank - Tri-University Collaborative Onsite Programming Contest - Preliminary
// URL: https://www.hackerrank.com/contests/tri-university-collaborative-onsite-programming-contest-preliminary/challenges/make-it-binary
// Memory Limit: 512 MB
// Time Limit: 4000 ms
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

using namespace std;

string divideByTwo(string number) {
    string result;
    int carry = 0;

    for (auto digit : number) {
        int currentDigit = digit - '0';
        int temp = carry * 10 + currentDigit;
        result.push_back((temp / 2) + '0');
        carry = temp % 2;
    }


    ll pos=0;
    for(ll i=0; i<result.size(); i++)
    {
    	if(result[i]!='0')
    	{
    		pos=i;
    		break;
    	}
    }
    
    if (pos != string::npos) {
        result = result.substr(pos);
    } else {
        result = "0";
    }

    return result;
}

int main()
{
    start() 
   
    string decimal;
    cin>>decimal;

    string rem;
    string quotient = decimal;

    
    while (quotient != "0") {
        rem = to_string((quotient.back() - '0') % 2) + rem;
        quotient = divideByTwo(quotient);
    }

   cout<< rem <<endl;


}