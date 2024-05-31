#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        int n,i,c,k,d=0;
        cin>>n;
        char x[n];
        for(i=0; i<n; i++)
        {
            cin>>x[i];
        }
        c=0;
        k=0;
        bool p=true;
        for(i=0; i<n; i++)
        {

                if(x[i]=='T')
                {
                    c++;
                }
                if(x[i]=='M')
                {
                    k++;
                }

                if(k>c || c-k>n/3)
                {
                    p=false;
                }


        }



            if(p && k*2==c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }


    }

}
