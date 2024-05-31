#include<stdio.h>
#include<string.h>
#include<wctype.h>
int main()
{
    char x[1000];
    int i,L;
    scanf("%s",x);

    L=strlen(x);
    for(i=0; i<L; i++){
        if(x[0]>='a' && x[0]<='z'){
            x[0]=towupper(x[0]);
        }
    }
    printf("%s\n",x);

}
