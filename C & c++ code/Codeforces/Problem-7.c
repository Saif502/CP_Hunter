#include<bits/stdc++.h>
int main()
{
	int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);	
    }
    int start=0,end=n,kye,mid;
    scanf("%d",&kye);
    do
    {
        mid=((start+end)/2);
        printf("start:%d\t End:%d\t Kye:%d\t Mid:%d\n",start,end,kye,mid);
        
        if(x[mid]==kye){
            printf("Find at %d",mid+1);
            break;
        }
         else if(x[mid]>kye){
            end= mid-1;

        }
        else{
            start= mid+1;
        }

    }
    while(start<=end);
    if(start>end) printf("Faild\n");
            
}
    
