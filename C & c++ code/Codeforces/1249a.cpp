#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int x[n];
        int i,c=1;
        for(i=0; i<n; i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        for(i=0; i<n; i++)
        {
            if(abs(x[i+1]-x[i])==1)
            {
                c=2;
                break;
            }
        }
        cout<<c<<endl;


    }
}
