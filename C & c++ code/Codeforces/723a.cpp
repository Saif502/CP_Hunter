#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[3];
    int i,s=0;
    for(i=0; i<3; i++)
    {
        cin>>x[i];
    }
    sort(x,x+3);
    for(i=0; i<2; i++)
    {
        s=s+x[i+1]-x[i];
    }
    cout<<s<<endl;
}
