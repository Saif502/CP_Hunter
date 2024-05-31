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
        if(n==1) cout<<-1<<endl;
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i==1)
                {
                    cout<<2;
                }
                 else
                 {
                     cout<<3;
                 }


            }
            cout<<endl;
        }

    }
}
