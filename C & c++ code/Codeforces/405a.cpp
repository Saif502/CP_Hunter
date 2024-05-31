#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int x[1000];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>x[i];
    }
    sort(x,x+n);
    for(i=0; i<n; i++){
        cout<<x[i]<<endl;
    }
}
