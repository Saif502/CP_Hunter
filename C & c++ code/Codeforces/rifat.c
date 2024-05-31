#include<stdio.h>
int main()
{
  int L,W,R;
    float X,Y;
    scanf("%d",&L);
    X=(float)(L*9)/20;
    W=(6*L)/10;
    Y=W/2;
    R=L/5;
    printf("L=%d\nW=%d\nR=%d\n",L,W,R);
    printf("X=%.1f\nY=%.1f\n",X,Y);
    return 0;
}
