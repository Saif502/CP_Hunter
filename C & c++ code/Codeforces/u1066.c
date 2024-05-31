#include<stdio.h>
int main()
{
    int x[5];
    int i, c=0, k=0, j=0, m=0;

    for(i=0; i<5; i++){
        scanf("%d",&x[i]);
    }
     for(i=0; i<5; i++){
        if(x[i]%2==0){
           c++;
        }
        if(x[i]%2 != 0){
            k++;
        }
        if(x[i]>0){
            j++;
        }
        if(x[i]<0){
            m++;
        }
     }
     printf("%d valor(es) par(es)\n",c);
     printf("%d valor(es) impar(es)\n",k);
     printf("%d valor(es) positivo(s)\n",j);
     printf("%d valor(es) negativo(s)\n",m);
}

