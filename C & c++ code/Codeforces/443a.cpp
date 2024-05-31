#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char a[1000];
    int i,s;
    gets(a);
    int l=strlen(a);
    sort(a,a+1);
    s=0;
    for(i=0;i<l-1;i++){
        if(a[i]>=97 &&a[i]<=122){
            s++;
            if(a[i]==a[i+1])s--;
        }
    }
    cout<<s<<endl;
    return 0;
}
