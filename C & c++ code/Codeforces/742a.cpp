#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,c,x;
    cin>>n;
    if(n%4==0 && n!=0)
    {
        x=4;
    }
    else
    {
       x=n%4;

    }
    c=pow(8,x);
    c=c%10;
    cout<<c<<endl;

}




