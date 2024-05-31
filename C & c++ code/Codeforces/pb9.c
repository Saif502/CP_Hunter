#include<bits/stdc++.h>
int main()
{
        int n,i;
        int a[8]={2,3,4,5,6,7,8,9};
        printf("Enter a number :");

        scanf("%d",&n);
        for(i=0;i<8;i++)
        {
            if(n%a[i]==0)
            {
                 printf("Divisible by %d \n",a[i]);
            }
        }

}