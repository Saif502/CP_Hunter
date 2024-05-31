#include<stdio.h>
int main()
{
   int i,j,n,temp;
   int array[n];
   printf("Enter the value of n:");

   scanf("%d",&n);

   for(i=0; i<n; i++){
    scanf("%d ",&array[i]);
   }

   for(i=0; i<n-1; i++)
    {
      for(j=i+1; j<n; j++)
        {
        if(array[i]>array[j])
            {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            }

        }

   }
   for(i=0; i<n; i++)
    printf("%d ",array[i]);


}
