#include<stdio.h>
int main()
{
    char a[]={'q','g','o'};
    int i=0;
    while(1){
        if(a[i]=='\0'){
           break;
        }
         printf("%d - %c\n",i,a[i]);
    i++;
    }


}
