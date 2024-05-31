#include<stdio.h>
int main()
{
    int n=15;
    int x[n]={11,89,36,67,9,91,49,97,43,57,72,88,7,2,17};
    int kye,c=0,d=0,i,j;
    int arr[100];
    scanf("%d",&kye);
    for(i=0; i<n; i++)
    {
    	if(x[i]==kye)
    	{
    		c=i;
    		d=1;
    		break;
    	}
    	else
    	{
    		for(j=0; j<=n-2; j++)
    		{
    			arr[j]=x[j];
    		}
    		arr[n-1]=kye;
    		arr[n]=x[n-1];
    	}
    }
    if(d)
    {
    	printf("The Token Number is Found \n");
    	printf("The New list: ");
         for(i=0; i<n; i++)
		    {
		    	if(c==i)continue;
		    	printf("%d ",x[i]);
		    }
    }
    else 
    {
    	printf("The Token Number is Not Found \n");
    	printf("The New list: ");
    	 for(i=0; i<=n; i++)
		    {
		    	printf("%d ",arr[i]);
		    }
    }
   
    
            
}
    
