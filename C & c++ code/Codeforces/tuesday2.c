#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("%c is the lower case\n",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c is the upper case\n",ch);
    }

}
