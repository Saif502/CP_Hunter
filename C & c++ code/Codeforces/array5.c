#include<stdio.h>
int main()
{
    int a[5],b[5],ab[5];
    int i;
     printf("Enter the value of a:\n");
     for(i=0;i<5;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("Enter the value of b:\n");
     for(i=0;i<5;i++)
     {
         scanf("%d",&b[i]);
     }
     for(i=0;i<5;i++){
     ab[i]=a[i]+b[i];
     }
     printf("the value of ab:\n");
     for(i=0;i<5;i++)
     {
         printf("%d\n",ab[i]);
     }

}
