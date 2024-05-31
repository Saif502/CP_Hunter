#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long int func(long long int n)
{
    long long int x,y,z,sum=0;
    z=n;
        while(z!=0)
        {
            x=z%10;
            sum=sum+x;
            z=z/10;
        }

        y=__gcd(n,sum);


        if(y==1){
            func(n+=1);
        }
        else{
            return n;
        }
}
int main()
{

    long long int a,t;

    cin>>t;

    while(t--)
    {
        cin>>a;
        long long int v;

        v=func(a);

        cout<<v<<endl;

    }
    return 0;
}
