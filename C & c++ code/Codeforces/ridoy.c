#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[100];
    gets(s);
    int l=strlen(s);
   for(i=0; i<l; i++) printf("%c ",s[i]);

}
