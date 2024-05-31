#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i, L;
    scanf("%s",x);
    L=strlen(x);
    for(i=0; i<L; i++){
        if(x[i]=='H' || x[i]=='Q' || x[i]=='9'){
            printf("YES\n");
            return 0;
        }

    }
     printf("NO\n");
     return 0;

}
