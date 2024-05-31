#include<stdio.h>
int main()
{
    int a,s=0,n,i;

    printf("Enter which input we take: ");
    while(scanf("%d",&n)!=EOF){
    printf("\nEnter all input: ");
    for(i=1; i<=n; i++)
        {
        scanf("%d",&a);
        s=s+a;
        }
    printf("\nThe total sum: %d\n",s);
    }
}
