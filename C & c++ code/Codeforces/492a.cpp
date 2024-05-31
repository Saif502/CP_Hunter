#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i, sum=0, c=0,x=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
        x=x+sum;
        if(x<=n)
        {
            c++;
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
}
