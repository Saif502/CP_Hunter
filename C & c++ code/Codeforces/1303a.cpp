#include<bits/stdc++.h>

using namespace std;
int main()
{
    int T,i;
    cin>>T;

    char x[100];
    while(T--)
    {
        cin>>x;
        int k=0,j=0,c=0;
        int l=strlen(x);
        for(i=0; i<l; i++)
        {
            if(x[i]=='1')
            {
                k=i;
                break;
            }

        }
        for(i=l-1; i>=0; i--)
        {
            if(x[i]=='1')
            {
                j=i;
                break;
            }

        }
        for(i=k; i<j; i++)
        {
            if(x[i]=='0')
            {
                c++;
            }

        }
        cout<<c<<endl;
    }
}
