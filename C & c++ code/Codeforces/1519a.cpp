#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,b,d;
        cin>>r>>b>>d;
        if(d==0){
            if(r==b) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            if(r>b) swap(r,b);
            int dif=b/r;
            if(b%r!=0) dif++;
            if(dif-1<=d) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
