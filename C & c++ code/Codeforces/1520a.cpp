#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s=1,j=1;
        string x;
        cin>>x;
        for(int i=1;i<n;i++){
            if(x[i]!=x[i-1]){
                j++;
            }
        }
        sort(x.begin(),x.end());
        for(int i=1;i<n;i++){
            if(x[i]!=x[i-1]) s++;
        }
        if(j>s) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}



