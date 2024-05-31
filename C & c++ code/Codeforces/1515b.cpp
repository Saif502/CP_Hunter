#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
            int t;
            int n,m;
            cin>>n;
            int x[n];
            int i,c=0,k=0,s=0;
            for(i=0; i<n; i++)
            {
                  cin>>x[i];

            }
             c=binary_search(x,x+n,8);
            cout<<c<<endl;

}
