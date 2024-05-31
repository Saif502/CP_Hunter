#include<stdio.h>

void abhi(int x)
{
  int i;
    for(i=1;i<x;i++){
        if(x%i==0){
            printf(" %d,",i);
        }
    }
}

int main()
{
  abhi(44);
}
