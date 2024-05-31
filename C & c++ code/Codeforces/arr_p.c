#include<stdio.h>
int main()
{
    int arry1[]={1,2,3,4,5};
    int arry2[5];
    int i,j;
    for(i=0,j=5; i<5; i++,j--){
        arry2[j]=arry1[i];
    }
    for(i=0;i<5;i++){
        arry1[i]=arry2[i];
    }
     for(i=0;i<5;i++){
        printf("%d",arry1[i]);
     }
}
