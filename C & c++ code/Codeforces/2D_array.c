#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",x[i][j]);
            sum=sum+x[i][j];
        }
        printf("\n");
    }
   float avareg=sum/9;
   printf("the avareg is: %f",avareg);
}
