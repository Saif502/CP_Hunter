#include<stdio.h>
int main()
{
    float x[6], sum=0;
    int i,k;

    for(i=0; i<6; i++){
        scanf("%f",&x[i]);
    }
    k=0;
    for(i=0; i<6; i++){
        if(x[i]>0){
           sum=sum+x[i];
           k++;
        }
    }
    printf("%d valores positivos\n",k);
    printf("%.1f\n",sum/k);

}
