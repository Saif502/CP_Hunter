#include<stdio.h>
main()
{
    int i,j,k;
    i=9;
    j=i++;
    k=j++;
    printf("%d%d%d",i,j,k);
    return 0;
}
