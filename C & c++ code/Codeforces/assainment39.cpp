#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=1;
    cin>>n;
    int x[n];

    for(i=0; i<n; i++){
        cin>>x[i];
        if(n<=20){
            cout<<c<<" "<<x[i]<<endl;
            c++;
        }
        else{
            break;
        }

    }

}
