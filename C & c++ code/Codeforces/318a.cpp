#include<iostream>
using namespace std;
int main()
{
    int n,p,k,c=0,i,j;
    cin>>n>>p;
    int x[n],y[n],z[n];

    for(i=1,j=0,k=0; i<=n; i++)
    {
        if(i%2==1)
        {
            x[j]=i;
            j++;
            c++;
        }
        else
        {
            y[k]=i;
            k++;
        }
    }
    for(i=1,j=0; i<=c; i++,j++)
    {
        z[i]=x[j];

    }
    for(i=c+1,k=0; i<=n; i++,k++)
    {
        z[i]=y[k];
    }
    for(i=1; i<=n; i++)
    {
        if(i==p)
        {
            cout<<z[i];
        }
    }
    return 0;
}
