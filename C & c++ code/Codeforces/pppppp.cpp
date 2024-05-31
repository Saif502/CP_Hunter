#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,sum=0,k;
   scanf("%d",&n);
   int x[k];
   int max[k];

   for(i=0; i<n; i++){
    scanf("%d",&x[i]);
   }
   for(i=0;i<n; i++){
    sum=sum+i;
    max[i]=sum;
   }
   sort(max,max+n);
   for(i=0; i<n; i++){
    printf("%d\n",max[i]);
   }

    return 0;
}
