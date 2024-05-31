#include<iostream>
using namespace std;
int main()
{
    int a, b, t, s,m;
    cin>>t;
    while(t-->0){
        cin>>a>>b;

        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            s=b-a%b;
               cout<<s<<endl;
            }
        }
}
