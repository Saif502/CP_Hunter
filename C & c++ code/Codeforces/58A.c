#include<stdio.h>
#include<string.h>
int main()
{
    char x[]="hello";
    char y[100];
    int i,a=0,L,count=0;
    gets(y);
    L=strlen(y);

    for(i=0; i<L; i++){
        if(y[i]==x[a]){

            a++;
            count++;
        }
    }
    if(count==5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
