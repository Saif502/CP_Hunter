#include<bits/stdc++.h>
using namespace std;
main()
{
    string x,y,z,a;
    cin>>x>>y>>z;
    a=x+y;
    sort(a.begin(),a.end());
    sort(z.begin(),z.end());
    int c=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==z[i])
        {
            c++;
        }
    }
    if(c==a.size() && c==z.size())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
