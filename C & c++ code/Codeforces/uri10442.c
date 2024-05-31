#include<stdio.h>
int main()
{
   int x[100];
   int y[3];
   int i,j,temp,k;
   int n=3;

   for(i=0; i<n; i++){
    scanf("%d",&x[i]);
   }
      for(i=0,k=0; k<3; k++,i++){
       y[k]=x[i];
   }



   for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
        if(x[i]>x[j]){
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
      }
   }
   for(i=0; i<n; i++){
    printf("%d\n",x[i]);
   }
   printf("\n");

      for(k=0; k<3; k++){
    printf("%d\n",y[k]);
   }


}
