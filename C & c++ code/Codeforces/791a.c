#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d%d",&a,&b);
    r=b%a;
    if(a==b){
        printf("1\n");
    }
    else{
        r=b/a;
        printf("%d\n",r+1);
        }
}
