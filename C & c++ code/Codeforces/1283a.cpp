#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int x=(a*60)+b;
        cout<<1440-x<<endl;
    }
}
