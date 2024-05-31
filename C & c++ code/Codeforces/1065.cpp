#include<iostream>

using namespace std;
int main()
{

    long long int s,a,b,c,t,r,m,p,q;

    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>a;
        cin>>b;
        cin>>c;
        m=a*c;
        if(m<=s){
            p=s%m;
            q=s/m;
            r=(q*a)+(q*b)+(p/c);
        }
        else
        {
            r=s/c;
        }
        cout<<r<<endl;

    }

    return 0;
}

