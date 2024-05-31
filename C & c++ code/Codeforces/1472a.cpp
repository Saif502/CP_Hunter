#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,c=1,k=1;
        cin>>a>>b>>n;
        if(a%2==0 || b%2==0)
        {
            while(a%2!=1 || b%2!=1)
            {
               if(a%2==0)
               {
                   a=a/2;
                   c*=2;
               }
               if(b%2==0)
               {
                   b=b/2;
                   c*=2;
               }
            }

        }
        if(n>c)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }



    }
}
