#include<stdio.h>
int inputSize;

countingSort(int A[],int B[], int k)
{
    int i,j, C[k+5]={0};

    for(j=0; j<inputSize; j++)
    {
        C[A[j]]++;
    }
    for(i=1;i<k;i++)
    {
        C[i] = C[i] + C[i-1];
    }

    for(j=inputSize-1;j>=0;j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    for(i=1; i<=inputSize;i++)
    {
        printf("%d ", B[i]);

    }
    printf("\n");
}

int maximum(int A[]){
		int max,i;
		max=A[0];
		for(i=1;i<inputSize;i++){
		    if(A[i]>max){
		        max=A[i];
		    }
}
return max;

}
int main()
{
    //freopen("countingSort.txt","r",stdin);
    scanf("%d",&inputSize);
    int i, A[inputSize+5],k;
    int B[inputSize+5];
    for(i=0; i<inputSize; i++)
    {
        scanf("%d", &A[i]);
    }
      k=maximum(A);
      k++;
      countingSort(A,B,k);

    return 0;
}