#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if( (a||b||c)!=0 && (a+b)>c && (b+c)>a && (a+c)>b ){
    printf("triangle\n");}
    else{
        printf("not triangle\n");
    }
}
