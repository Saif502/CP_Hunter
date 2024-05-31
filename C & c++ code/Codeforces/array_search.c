#include<stdio.h>
int main()
{
    int arr[100],i,n,key,cas;
    while(scanf("%d",&n)!=EOF)
    {
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    for(i=0; i<n; i++){
        if(arr[i]==key)
        {
           break;
        }
    }
    printf("case %d: ",cas);
    cas++;
    if(i==n)
        printf("No\n");
    else
  printf("%d\n",i+1);

    }
    return 0;
}
