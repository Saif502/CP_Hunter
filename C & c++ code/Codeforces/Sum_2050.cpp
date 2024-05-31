#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       long long int n,x,sum=0;
        cin>>n;
        if(n<2050)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(n%2050==0)
            {
                x=n/2050;
               long long int temp=x;
               while(temp!=0)
               {
                   sum=sum+(temp%10);
                   temp=temp/10;
               }
               cout<<sum<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }

        }
    }
}
