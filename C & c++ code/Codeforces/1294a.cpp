#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,c,d,m,n;
        cin>>a>>b>>c>>d;
        m=max(a,max(b,c));
        n=(m-a)+(m-b)+(m-c);
        if(n>d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
                    long long int x=a+b+c+d;
                if(x%3==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
        }

    }
}
