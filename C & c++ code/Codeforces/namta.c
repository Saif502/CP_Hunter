
#include<stdio.h>
int main(){
    int i,n;
    while(1){
        printf("Enter Number ");
       scanf("%d",&n);
       if(n==0)return 0;
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
       }
return 0;
}
