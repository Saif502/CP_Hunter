#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i ,sum=0;
        cin>>n;
        int x[n],c=0,k=0;
        for(i=0; i<n; i++)
        {
            cin>>x[i];
             sum=sum+x[i];

            if(x[i]%2==0)
            {
                c++;

            }
            else
            {
                k++;
            }

        }
        if(sum%2==0)
        {
          if(c==n || k==n)
         cout<<"NO"<<endl;
         else
          cout<<"YES"<<endl;
        }
        else
        {
           cout<<"YES"<<endl;
        }




    }
}
