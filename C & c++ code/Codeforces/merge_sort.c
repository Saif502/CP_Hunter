#include <stdio.h>
const int N=1e5+5;
int a[N];
int i,j;
void merging(int low, int mid, int high) {
	 /* printf("abhi\n");
	  printf("%d %d\n",low,high);*/
    int l_s=mid-low+1;
    int L[l_s+1];
    int r_s=high-mid;
    int R[r_s];
    for(i=0; i<l_s; i++)
    {
    	L[i]=a[i+low];
    }
    for(i=0; i<r_s; i++)
    {
    	R[i]=a[i+mid+1];
    }
    L[l_s]=R[r_s]=1e9+5;
    int l_i=0;
    int r_i=0;
    for(i=low; i<=high; i++)
    {
    	if(L[l_i]<=R[r_i])
    	{
    		a[i]=L[l_i];
    		l_i++;
    	}
    	else
    	{
    		a[i]=R[r_i];
    		r_i++;
    	}
    }
   /*  for(i=0; i<l_s; i++)
    {
    	 printf("%d ", L[i]);
    }
    printf("\n");
    for(i=0; i<r_s; i++)
    {
    	 printf("%d ", R[i]);
    }
    printf("\n");*/
}

void sort(int low, int high) {
	  if(low>=high)return;
      int mid=(low + high)/2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
    
}

int main() { 
   int n;
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
   	  scanf("%d",&a[i]);
   }
   sort(0,n-1);

   for(i = 0; i<n; i++)
      printf("%d ", a[i]);
}