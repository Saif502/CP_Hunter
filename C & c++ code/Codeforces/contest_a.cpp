#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int x[n],i;
        int p[n],q[n],c=0,k=0;
        for(i=0; i<n; i++)
        {
            cin>>x[i];
            if(x[i]%2==1)
            {
                p[c]=x[i];
                c++;
            }
            else
            {
                q[k]=x[i];
                k++;
            }
        }
        for(i=0; i<c; i++)
        {
            cout<<p[i]<<" ";
        }
        for(int j=0; j<k; j++)
        {
            cout<<q[j]<<" ";
        }
        cout<<endl;
    }

}




