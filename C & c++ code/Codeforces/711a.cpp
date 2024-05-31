#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x[1000];
    int i,c=0,k=0,l=0,j;
    for(i=0; i<n; i++)
    {
        cin>>x[i];

        for(j=0; j<x[i].size()-1; j++)
        {
            if(x[i][j]=='O' && x[i][j+1]=='O' && c==0)
            {

                x[i][j]='+';
                x[i][j+1]='+';
                c=1;

            }

        }
    }


    if(c==1)
    {
        cout<<"YES"<<endl;

        for(i=0; i<n; i++)
        {
            cout<<x[i]<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
