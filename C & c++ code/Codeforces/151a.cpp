#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m,r,s;
    m=(k*l)/nl;
    r=(c*d);
    s=(p/np);
    int M=min(min(m,r),s);
    cout<<M/n<<endl;
}
