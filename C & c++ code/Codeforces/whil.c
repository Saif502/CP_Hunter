#include<stdio.h>
int main()
{
    int i=1,number;
    printf("Enter the number=");
    scanf("%d",&number);
    while(i<=10){
        printf("%d\n",(number*i));
        i++;}
        return 0;
}
