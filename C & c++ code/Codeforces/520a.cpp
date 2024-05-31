#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    char x[100];
    cin>>x;
    for(i=0; i<n; i++){

            if(isupper(x[i])){
                x[i]=tolower(x[i]);
            }
     }
     sort(x, x+n);
     for(i=0; i<n-1; i++){

            if(x[i] != x[i+1]){
                c++;
            }

     }
     if(c==25){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }

    return 0;
}
