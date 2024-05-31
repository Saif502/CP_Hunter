#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    char y[100];
    int i,L;
    gets(x);
    gets(y);
    L=strlen(x);
    for(i=0; i<L; i++){
        x[i]=tolower(x[i]);
        y[i]=tolower(y[i]);
       }
        if((strcmp(x,y)==0))
        {
            printf("0\n");
        }
        else
        {
        for(i=0; i<L; i++){

        if(x[i]>y[i])
          {
            printf("1\n");
            break;
          }
          else if(x[i]<y[i])
          {
            printf("-1\n");
            break;
          }

        }

    }


}
