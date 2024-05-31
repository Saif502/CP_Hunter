#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x[4];
    int i,count=0;
    for(i=0; i<4; i++){
        scanf("%d", &x[i]);
    }
    sort(x,x+4);
    for(i=0; i<4; i++){
        if(x[i]==x[i+1]){
           count++;
        }
    }
    printf("%d",count);
}
