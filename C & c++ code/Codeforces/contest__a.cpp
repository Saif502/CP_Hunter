#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,a,c=0;
        cin>>n;
        int x[n],i;

        for(i=0; i<n; i++)
        {
            cin>>x[i];

        }
        for(i=0; i<n; i++)
        {
             a=sqrt(x[i]);

            if(a*a!=x[i])
            {
                c=1;
                break;
            }
        }



        if(c==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
