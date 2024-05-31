#include<bits/stdc++.h>
int main()
{
    int i,n;
    float a[100],sum = 0.0, avg, SD = 0.0;
    //printf("Enter n: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
      sum +=a[i];
    }
    avg = sum/n;
    for (i=0;i<n;i++)
    {
        SD += pow(a[i] -avg, 2);
    }
    float ans=sqrt(SD/n);
    printf("Standard Deviation = %.4f",ans);
    return 0;
}
