#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b>n)
    {
        if(n-a<b)
        {
           cout<<n-a<<endl;
        }
        else{
         cout<<n-b<<endl;
        }


    }
    else if(a+b==n){
        cout<<b<<endl;
    }
    else{
        cout<<b+1<<endl;
    }
}
