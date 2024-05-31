
#include<stdio.h>

int main()
{
   int f=1, i, n;
   while(scanf("%d",&n)!=EOF){
      for(i=1; i<=n; i++){
          f=f*i;
          printf("%d",i);
      }
       printf("%d%d",f);
   }

    return 0;
}
