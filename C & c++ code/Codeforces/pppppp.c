#include <stdio.h>
#include <string.h>
int main()
{
    char s[15];
    int i,j,n,*str;

    printf("Enter a string");
    scanf("%s",str);
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        str[n]=str[0];

        for(j=0;j<n;j++)
        {
            str[j]=str[j+1];
        }
        str[n]='\0';
        printf("\n %s",str);
    }
    return 0;
}
