#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,n;
    char x[1000];
    gets(x);
    n=strlen(x);
    sort(x,x+n);
    for(i=0; i<n; i++){
        if(x[i]>=97 && x[i]<=122){
            c++;
              if(x[i]==x[i+1]){
                c--;
        }
    }

    }
    cout<<c<<endl;
}


