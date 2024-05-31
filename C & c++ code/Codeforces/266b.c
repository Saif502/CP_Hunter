#include<stdio.h>
int main()
{
    char x[1000];
    int n,a,i,j;
    scanf("%d%d",&n,&a);
    scanf("%s",x);
      for(j=0; j<a; j++)
        {
        for(i=0; i<n-1; i++){
            if(x[i]=='B'&& x[i+1]=='G')
            {
            x[i]='G';
            x[i+1]='B';
            i++;
            }

        }

    }
    printf("%s\n",x);

}
