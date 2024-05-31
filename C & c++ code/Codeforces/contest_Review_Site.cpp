#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,c=0;
        cin>>n;
        int x[n];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
            if(x[i]==1 || x[i]==3)
            {
                c++;
            }
        }
        cout<<c<<" "<<endl;
    }
}
