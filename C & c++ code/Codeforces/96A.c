#include<stdio.h>
#include<string.h>
int main()
{
    char x[700];
    int i, L, c=0;
    scanf("%s",x);
    L=strlen(x);
    for(i=0; i<L; i++){
        if(x[i]=='0' && x[i+1]=='0' && x[i+2]=='0' && x[i+3]=='0' && x[i+4]=='0' && x[i+5]=='0' && x[i+6]=='0'){
            c=1;
        }
        else if(x[i]=='1' && x[i+1]=='1' && x[i+2]=='1' && x[i+3]=='1' && x[i+4]=='1' && x[i+5]=='1' && x[i+6]=='1'){
            c=1;
        }

    }
    if(c==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
