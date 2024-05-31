#include<stdio.h>
int a[100000];
void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
int pertation(int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    while(i<j)
    {
        do
        {
            i++;
        }
        while(a[i]<=pivot);
        do
        {
            j--;
        }
        while(a[j]>pivot);
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[l],&a[j]);
    return j;
}
void quick_sort(int l, int h)
{
    if(l<h)
    {
       int j=pertation(l,h);
        quick_sort(l,j);
        quick_sort(j+1,h);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    //a[n]=99999999;
    quick_sort(0,n);
     for(i=0; i<n; i++)
        printf("%d ",a[i]);
}
