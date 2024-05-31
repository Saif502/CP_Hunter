#include<stdio.h>
int main()
{
     int A,B,C,D;
     while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF){


     if (A+B>C && B+C>C && C+A>B){
     printf("S\n");
     }
     else if (A+B>D && A+D>B && B+D>A){
     printf("S\n");
     }
     else if (B+C>A && C+A>B && A+B>C){
     printf("S\n");
     }
     else if (B+C>D && B+D>C && C+D>B){
     printf("S\n");
     }
     else {
     printf("N\n");
     }

     }

     return 0;
}
