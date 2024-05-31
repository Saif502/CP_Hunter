#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=0,i;
    int a[100000],d;
    int p,q[10000],j;
    cin>>n>>m;
    x=n;
    for( i=1; i<=m; i++)
    {
        if(n<10)
        {
            x=x+1;
            cout<<x<<" ";
            if(x>9)
            {
                d=0;
                int o=x;
                cout<<x<<" ";
                while(o!=0)
                {
                    a[d]=(x%10)+1;
                    d++;
                }
            }
        }
        else
        {

            int temp=n;
            j=0;
            while(n!=0)
            {
                q[j]=(n%10)+1;
                n=n/10;
                j++;

            }
        }
    }

    /*for(i=0; i<d; i++)
    {
        cout<<a[i];
    }
    for(i=0; i<j; i++)
    {
        cout<<q[i];
    }
    */



}
