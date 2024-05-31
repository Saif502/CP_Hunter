#include<stdio.h>
jbint i,j,min,temp,key;
void selectionSort(int a[],int n)
{

    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

void insertionSort(int a[],int n)
{
       for(i=1;i<n;i++)
       {
       	    key=a[i];
       	    j=i-1;

       	    while(j>=0 && a[j]>key )
       	    {
       	    	  a[j+1]=a[j];
       	    	  j--;
       	    }

       	    a[j+1]=key;
       }
}


void countingSort(int a[],int n)
{
	   int mx=a[0];

	   for(i=0;i<n;i++)
	   {
	   	    if(a[i]>mx)
            {
                mx=a[i];
            }
	   }

	   int count[mx+1],b[n];
	   for(i=0;i<=mx;i++)
	   {
	   	   count[i]=0;
	   }

	   for(i=0;i<n;i++)
	   {
	   	  count[a[i]]++;
	   }

	   for(i=1;i<=mx;i++)
	   {
	   	   count[i]=count[i]+count[i-1];
	   }

	   for(i=n-1;i>=0;i--)
	   {
	   	   b[--count[a[i]]]=a[i];
	   }

	   for(i=0;i<n;i++)
	   {
	   	   a[i]=b[i];
	   }
}


void merge(int a[], int beg, int mid, int end)
{
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];


    for (i = 0; i < n1; i++)
    LeftArray[i] = a[beg + i];
    for (j = 0; j < n2; j++)
    RightArray[j] = a[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = beg;

    while (i < n1 && j < n2)
    {
        if(LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }


}

void print(int a[], int n)
{
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

        selectionSort(a,n);
	    print(a,n);
        /*
        insertionSort(a,n);
        print(a,n);

        countingSort(a,n);
        print(a,n);

        mergeSort(a,0,n-1);
        print(a,n);
        */

    return 0;

}