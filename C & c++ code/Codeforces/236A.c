#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x[100];
    int L,i,j,count=0;
    scanf("%s",x);

    L=strlen(x);

    sort(x,x+1);
    for(i=0; i<L-1; i++){
            if(x[i]!=x[j]){
                count++;
            }

    }

    if(count%2==0){

        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

}
