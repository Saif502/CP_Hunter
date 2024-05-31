#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, b=1,l;
    char x[1000];
    cin>>x;
    l=strlen(x);
    for(i=0; i<l; i++){
        if(x[i]=='W' && x[i+1]=='U' && x[i+2]=='B'){
            i=i+2;
            if(!b){
                cout<<" ";
            }
            continue;
        }
        else{
                b=0;
            cout<<x[i];
        }
    }
    return 0;
}
