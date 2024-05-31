#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i;
    cin>>a>>b>>c>>d;
    string x;
    cin>>x;
    int o=0,k=0,p=0,q=0;
    for(i=0; i<x.size(); i++)
    {

        if(x[i]=='1')
        {
            o++;
        }
         if(x[i]=='2')
        {
            k++;
        }
         if(x[i]=='3')
        {
            p++;
        }
         if(x[i]=='4')
        {
            q++;
        }
    }
    cout<<a*o+b*k+c*p+d*q<<endl;
}
