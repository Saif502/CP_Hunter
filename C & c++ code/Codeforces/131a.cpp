#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    char x[100];
    int i,c,L,p=0,q=0;
    cin>>x;
    L=strlen(x);
    for(i=1; i<L; i++)
    {
        if(islower(x[i]))
        {
            p++;
        }

    }
    if(islower(x[0])&& p==0)
    {
        x[0]=toupper(x[0]);
        for(i=1; i<L; i++)
        {
            x[i]=tolower(x[i]);
        }
        cout<<x;
    }
    else if(isupper(x[0]) && p==0)
    {
        for(i=0; i<L; i++)
        {
            x[i]=tolower(x[i]);
        }
        cout<<x;
    }
    else
    {
        cout<<x;
    }

}

