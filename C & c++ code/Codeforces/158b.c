#include<stdio.h>
int main()
{
    int n;
    int x[100];
    int i,c,sum;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
    sum=0;
    for(i=0; i<n; i++){
        sum=sum+x[i];

        if(sum%4==0){
            c=(sum/4);
        }
        else{
            c=(sum/4)+1;
        }

    }
    printf("%d",c);
}
