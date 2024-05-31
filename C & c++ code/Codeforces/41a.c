#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,L,L1,c;
    char x[105];
    char y[105];
    scanf("%s%s",x,y);
    L=strlen(x);
    L1=strlen(y);
    c=0;

  for(i=0,j=L1-1; i<L,j>=0; i++,j--)
    {
        if(x[i]==y[j])
        {
            c++;
        }
    }
   if(c==L)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
