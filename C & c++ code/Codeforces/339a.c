#include <stdio.h>
#include<string.h>

int main()
{
    char x[1000];
    int i,j,L, temp;
    scanf("%s",x);
    L=strlen(x);

    for(i=0; i<L; i++){
        for(j=0; j<L-1; j+=2){
            if(x[j]>x[j+2]){
                temp=x[j];
                x[j]=x[j+2];
                x[j+2]=temp;

            }

        }
    }

       printf("%c",x[0]);
       for(i=2;i<L;i+=2)
    {

        printf("+%c",x[i]);
      }
}
