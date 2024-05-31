#include<stdio.h>
#include<string.h>
int main()
{

    int i,L,c=0,n,k=0;
    scanf("%d",&n);
     char x[n];
    scanf("%s",x);

    for(i=0; i<strlen(x); i++){
        if(x[i]=='A'){
            c++;
        }
        if(x[i]=='D'){
            k++;
        }

    }
    if(c==k){
        printf("Friendship\n");
    }
    else if(c>k){
        printf("Anton\n");
    }
    else{
        printf("Danik\n");
    }


}
