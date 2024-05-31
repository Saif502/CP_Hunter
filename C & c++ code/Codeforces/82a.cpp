#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n,c=1;
    cin>>n;
    string N[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(c*5<n){
        n=n-(c*5);
        c*=2;
    }
    cout<<N[(n-1)/c]<<endl;
    return 0;
}
