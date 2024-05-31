#include<stdio.h>
int main()
{
    int i;
   char A[100];
   for(i=0;i<5;i++){
    scanf("%c",&A[i]);
   }
   for(i=0;i<5;i++){
    printf("%d --> %c\n",i,A[i]);
   }
    return 0;
}
