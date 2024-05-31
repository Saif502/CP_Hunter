#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int r=n*a;
    int s=ceil((n*b)/(float)m);
    cout<<min(r,s);
}
