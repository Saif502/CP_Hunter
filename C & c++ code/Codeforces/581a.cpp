#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b;
    if(a<b){
        cout<<a<<" ";
    }
    else{
        cout<<b<<" 3";
    }
    if(a>b)
    {
       s=(a-b)/2;
    }
    else
    {
        s=(b-a)/2;
    }
    cout<<s<<endl;

}
