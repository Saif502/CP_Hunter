#include<iostream>
using namespace std;
int main(){
    long long t,n,m,s;
    cin>>t;
    while(t--){
        cin>>n>>m>>s;
        if(s%n==0) cout<<(n-1)*m+(s/n)<<endl;
        else cout<<((s%n)-1)*m+(s/n)+1<<endl;

    }
    return 0;
}
