#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int temp,sum=0,
    x=n;
    while(1)
    {

        temp=x;

        while(temp!=0)
        {
            sum+=temp%10;
            temp=temp/10;
        }

        if(sum%4==0)
        {
           cout<<x<<endl;
           break;
        }
        else
        {
            x++;
            sum=0;
        }
    }

}
