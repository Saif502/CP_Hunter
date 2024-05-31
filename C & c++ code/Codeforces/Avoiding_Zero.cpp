#include<iostream>
using namespace std;
int main()
{
    int i,n,t,s=0;
    cin>>t;
    while(t-->0){
        cin>>n;
        int x[n],c=0;
        for(i=0; i<n; i++){
            cin>>x[i];
        }
        for(i=0; i<n; i++){
            s=s+x[i];
            if(s!=0){
               c++;
            }
        }
        if(s==0){
            cout<<"NO"<<endl;
        }

        if(c>0){
            cout<<"YES"<<endl;
            for(i=0; i<n; i++){
               cout<<x[i]<<endl;
            }
        }
    }
}
