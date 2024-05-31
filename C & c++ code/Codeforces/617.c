#include<stdio.h>
int main()
{
    int a,b=0,c=0,i;
    int x[5]={5,4,3,2,1};
    scanf("%d",&a);
    for(i=0; i<5; i++){
        if(a==x[i]){
        printf("1\n");
        break;
        }
        else{

           while(b<a){
            b=b+x[i];
            c++;
             }
             printf("%d",c);
             break;


        }

    }

}
