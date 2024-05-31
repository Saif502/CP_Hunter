#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[]="hello",x[101];

    cin>>x;

    int l,l1,c=0,i,j;
    l=strlen(x);
    l1=strlen(a);
    for(j=0;j<l1;j++){
        for(i=0;i<l;i++){
            if(a[j]==x[i]){
            c++;
        }
        i=i;
        }
    }
    if(c==l1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
