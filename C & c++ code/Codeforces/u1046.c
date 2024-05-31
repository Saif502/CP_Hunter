#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    if(a==b){
       x=24;
       printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else if(a>12){
        x=(24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else{
        x=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }

}
