#include<bits/stdc++.h>

using namespace std;

int main()
{
    char x[100];
    int L,i,cnt=0;
    scanf("%s",x);

    L=strlen(x);

    sort(x,x+L);
    for(i=0; i<L; i++){
            if(x[i]!=x[i+1]){
                cnt++;
            }

    }

    if(cnt%2==0){

        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

}

