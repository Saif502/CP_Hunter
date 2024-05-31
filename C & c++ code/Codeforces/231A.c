#include<stdio.h>
int main()
{
    int n,i,sum=0, count=0;
    int x[3];

    scanf("%d",&n);
    while(n--){

    for(i=0; i<3; i++){
        scanf("%d",&x[i]);
    }
    sum=0;
     for(i=0; i<3; i++){
        if(x[i]==1){
            sum++;
        }
     }
        if(sum>=2){
        count++;
        }

    }
        printf("%d\n",count);

  return 0;

}
