#include<iostream>
using namespace std;
int main()
{
    int a,t,k;
    cin>>t;
    while(t-->0){
        cin>>a;
        if(a%2==0){
            k=(a/2)-1;
            cout<<k<<endl;
        }
        else{
            k=a/2;
            cout<<k<<endl;
        }

    }
}
