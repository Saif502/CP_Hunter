#include<stdio.h>
int main()
{
    int x[5];
    int i, c;

    for(i=0; i<5; i++){
        scanf("%d",&x[i]);
    }
     c=0;
     for(i=0; i<5; i++){
        if(x[i]%2==0){
           c++;
        }
     }
     printf("%d valores pares\n",c);
}
