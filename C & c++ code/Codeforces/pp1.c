#include<stdio.h>
int main()
{
    int x[]={3,5,6,8,2};
    int y[5];
    int i,j;

    for(i=0, j=9; i<5; i++, j--){
        y[j]=x[i];
    }

    for(i=0; i<5; i++){
        x[i]=y[i];
    }
    for(i=0; i<5; i++){
        printf(" %d\n",x[i]);
        }
}
