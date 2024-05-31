#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,sum=0;
    cin>>n;
    int gdn=0;
    int gtn=0;
    int pass=0;
    int max=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        gdn=pass-a;
        gtn=gdn+b;
        pass=gtn;
        if(pass>max)
        {
            max=pass;
        }

    }
    cout<<max<<endl;
}
