#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
    int y[4], temp, r, i,j, c=0;
    temp=x;
    i=0;
    while(temp!=0)
    {
        y[i]=temp%10;
        temp=temp/10;
        i++;
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(y[j]==y[i])
            {
             c=1;
            }

        }

    }
    if(c==1)
    {
        fun(x+=1);
    }
    if(c==0)
    {
        return x;
    }

}


int main()
{
    int n,k,b;
    cin>>n;
    b=n+1;
    k=fun(b);

    cout<<k<<endl;

}
