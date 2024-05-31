#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,c=0;
    cin>>a>>b;
    int n=a*b;
    char x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i]=='C' || x[i]=='M' || x[i]=='Y')
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
        cout<<"#Color"<<endl;
    }
}
