#include<stdio.h>
int main()
{
    int i,j,temp,n;
    int array[5]={8,3,1,6,2};
    i=0;
    n=5;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf(" %d",array[i]);
    }
}
