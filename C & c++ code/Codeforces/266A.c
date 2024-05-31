#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a=0,b=0,c=0,m;
    scanf("%d\n",&n);
    char x[1000];
    gets(x);
    for(i=0; i<n; i++){
        if(x[i]=='R'&& x[i+1]=='R'){
            a++;

        }
        else if(x[i]=='G' && x[i+1]=='G'){
            b++;

        }
        else if(x[i]=='B' && x[i+1]=='B'){
            c++;

        }

    }


    printf("%d\n",a+b+c);

    return 0;

}
