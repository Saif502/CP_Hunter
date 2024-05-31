#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x=0, s=n;
        if(k*2>=n)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            while(k--)
            {
                cout<<++x<<" "<<s--<<" ";
            }
            while(s>x)
            {
               cout<<++x<<" ";
            }
                cout<<endl;

            }

        }
}
