#include<bits/stdc++.h>
#include<string.h>

float mean(float arr[], int n)
{
    float sum = 0;
    for(int i = 0;i < n; i++)
        sum += arr[i];
    return sum/n;
}

float median(float arr[], int n)
{
    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2])/2;
    return arr[n/2];
}

float mode( float arr[], int n)
{
    int max_count = 1, res = arr[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
    if (count > max_count) 
    { 
        max_count = count; 
        res = arr[n - 1]; 
    } 
    
    return res;
}
int main(){
    int n,i,j,t=0;
    float arr[50];
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
    	scanf("%f",&arr[i]);
    }     
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("Mean = %f \n",mean(arr, n));
    printf("Median = %f \n",median(arr, n));
    printf("Mode = %f \n",mode(arr, n));
    
    return 0;
}