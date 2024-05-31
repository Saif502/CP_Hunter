#include<bits/stdc++.h>
int main()
{
    char x[1000];
    char y[1000];
    char z[1000];
    int i,j,n,L;
    scanf("%s",&x);
    scanf("%s",&y);
    L=strlen(x);
    for(i=0; i<L; i++){
        z[i]=x[i]+y[i]-48;
         if(z[i]=='2'){
                z[i]='0';
            }
    }
     for(i=0; i<L; i++){

        printf("%c",z[i]);
     }
}
