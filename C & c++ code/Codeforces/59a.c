#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i,j=0,k=0,L;
    scanf("%s",x);
    L=strlen(x);
    for(i=0; i<L; i++){
        if(x[i]>=65 && x[i]<=90){
            j++;
        }
        else if(x[i]>=97 && x[i]<=122){
            k++;
        }
    }

    if(j==k){
        for(i=0; i<L; i++){
        x[i]=tolower(x[i]);
       }
    }

    else if(j<=L/2){
        for(i=0; i<L; i++){
        x[i]=tolower(x[i]);
       }
    }
    else if(k<L/2+1){
        for(i=0; i<L; i++){
        x[i]=toupper(x[i]);
       }
    }
    printf("%s",x);


}
