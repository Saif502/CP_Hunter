#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,s=0,x,m,n,y;
    cin>>a>>b;
    s=a/b;
    n=a%b;
    x=s+n;


        while(1)
        {
           y=x/b;
           s=s+y;
           x=y+(x%b);

           if(x<b)
           {
               break;

           }
        }

    cout<<a+s;
}

