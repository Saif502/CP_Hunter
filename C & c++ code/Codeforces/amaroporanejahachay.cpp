#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, x;
    scanf("%d",&x);
    for(i=1; i<=x; i++){
        if(x%i==0){
            if(i==1 && i==x){
                printf("prime");
                break;
            }
            else{
                printf("not");
                break;
            }
        }
    }
}
