#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=(float)0.5*a*b;
    y=(float)0.5*c*d;
    if(x>y){
        printf("A\n");
    }
    else if(x<y){
        printf("B\n");
    }
    else if(x==y && a==c){
        printf("Same\n");
    }
    else if(x==y && a>c){
        printf("A\n");
    }
    else{
        printf("B\n");
    }

}
