#include<stdio.h>
#include<string.h>
int main()
{
    char x[101];
    int i,n, L;

    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%s",x);

       L=strlen(x);

     if(L>10){
        printf("%c%d%c\n",x[0],L-2,x[L-1]);
     }
     else{
        printf("%s\n",x);
     }

    }
    return 0;

}
