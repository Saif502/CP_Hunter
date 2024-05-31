#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,c=0;
    cin>>n;
    for(i=1;i<=1000;i++)
    {
        x=n*i+1;
        for(int j=2;j<=x;j++)
        {
            if(x%j==0){
                c++;
            }
            else{
                continue;
            }
        }
        if(c>1)
        {
            cout<<i;
            break;

        }
        else{
                c=0;
            continue;
        }

    }

}
