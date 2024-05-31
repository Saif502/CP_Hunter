#include<stdio.h>
#include<string.h>
int main()
{
   char x[100];
   int i,L,c=0;
   scanf("%s",x);
   L=strlen(x);
   for(i=0; i<L; i++){
    if(x[i]=='4' || x[i]=='7'){
        c++;
    }
   }
   if(c==4 || c==7){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }

}
