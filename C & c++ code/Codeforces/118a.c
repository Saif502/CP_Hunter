#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i, L;
    scanf("%s",x);
    L=strlen(x);

    for(i=0; i<L; i++){
            if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='y' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' || x[i]=='Y')
            {
             continue;
            }
            else{
                x[i]=tolower(x[i]);
            }
          printf(".%c",x[i]);

        }

    }



