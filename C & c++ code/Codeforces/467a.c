#include<stdio.h>

int main()
{
    int n,i,a,b,c=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if(b-a>=2){
          c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
