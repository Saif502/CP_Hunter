#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k;
        cin>>m>>n>>k;
        cout<<(m*n)-1<<endl;
        if(k!=(m*n)-1)
        {

            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
