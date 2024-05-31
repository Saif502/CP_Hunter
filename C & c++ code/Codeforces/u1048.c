#include<stdio.h>
int main()
{
    float s, b, c ;
    int p;
    char x='%';
    scanf("%f",&s);

    if(s>=0 && s<=400.00){
        c=(s*0.15);
        b=c+s;
        p=15 ;
    }
       else if(s>=400.01 && s<=800.00){
        c=(s*0.12);
        b=c+s;
        p=12 ;
    }
        else if(s>=800.01 && s<=1200.00){
        c=(s*0.1);
        b=c+s;
        p=10 ;
    }
        else if(s>=1200.01 && s<=2000.00){
        c=(s*0.07);
        b=c+s;
        p=7 ;
    }
    else{
        c=(s*0.04);
        b=c+s;
        p=4 ;
    }
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",c);
        printf("Em percentual: %d %c \n",p,x);

        return 0;

}
