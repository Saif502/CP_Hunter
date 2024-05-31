#include<bits/stdc++.h>
int main()
{
    int i, n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factors of %d are: \n", n);
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)printf("%d ",i);   
    }
    return 0;

}