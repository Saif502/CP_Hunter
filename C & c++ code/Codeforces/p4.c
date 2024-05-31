#include<stdio.h>
int main()
{
    int a,b,s;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==0&&b==0){
            break;
        }
        s=a+b;
        printf("%d\n",s);
    }
}
