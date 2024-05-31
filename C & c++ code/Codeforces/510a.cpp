#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int n, k;
    cin>>n>>k;
    for(i=1; i<=n; i++){
            if(i%4==0){
                cout<<"#";
                for(j=1; j<=k-1; j++){
                    cout<<".";
                }
                cout<<"\n";

            }
            else if(i%2==0){
                for(j=1; j<=k-1; j++){
                    cout<<".";
                }
                cout<<"#";
                cout<<"\n";
            }
        else{
                for(j=1; j<=k; j++){
            cout<<"#";
           }
           cout<<"\n";

        }
    }
}
