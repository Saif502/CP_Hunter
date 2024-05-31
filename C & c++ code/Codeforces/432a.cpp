#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a, c=0;
    cin>>n>>a;
    int x[n],i;
    for(i=0; i<n; i++)
    {
       cin>>x[i];
    }
    for(i=0; i<n; i++)
    {
            if(x[i]+a<=5)
        {
            ++c;
        }

    }
    cout<<c/3<<endl;
}
