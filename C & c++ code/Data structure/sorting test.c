#include<stdio.h>
int inputSize,C[111];
void inS(int A[],int B[],int k)
{
    for(int i=1; i<inputSize; i++)
    {
        C[A[i]]++;
    }
    for(int i=1; i<=k; i++)
    {
        C[i]+= C[i-1];
    }

    for(int i=inputSize; i>=1; i--)
    {
       B[C[A[i]]]=A[i];
       C[A[i]]--;
    }

    for(int i=1; i< inputSize; i++)
    {
        printf("%d ",B[i]);
    }

}
int main()
{
    int A[111],B[111];
    scanf("%d",&inputSize);
    int K=0;
    for(int i=1; i<= inputSize; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>K)K=A[i];
    }
    inS(A,B,K);

}
