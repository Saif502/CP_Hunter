#include<stdio.h>
int main()
{
    int a[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i,j,temp;

    for(i=0,j=9; i<10; i++, j--){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        printf("%d\n",a[i]);
       }


}
