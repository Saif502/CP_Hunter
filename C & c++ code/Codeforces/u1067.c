#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n+1; i<=(n+12); i++){
        if(i%2 != 0){
           printf("%d\n",i);
        }
    }
}
