#include<stdio.h>
int main()
{
    int i,n,c=0,loc,l, k=0;
    int x[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&x[i]);
    }
    for(i=1; i<=n; i++){
        if(x[i]%2==0){
            c++;
            loc=i;

        }
        else{
            k++;
            l=i;

        }
    }

    if(c==1){
            printf("%d",loc);
        }
    if(k==1){
            printf("%d",l);
        }
}

