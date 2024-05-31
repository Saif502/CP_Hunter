#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, c=0, k=0, d=0;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
          c++;
        }
        else if(b>a)
        {
            k++;
        }
        else
        {
            d++;
        }
    }
    if(c>k)
    {
        cout<<"Mishka"<<endl;
    }
    else if(k>c)
    {
        cout<<"Chris"<<endl;

    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
}
