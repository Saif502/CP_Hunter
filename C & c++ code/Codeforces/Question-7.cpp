#include<stdio.h>
#define in int
int main()
{
	in a,x;
	scanf("%d",&a);
	if(a==0||a==1)x=50;
	else if(a==2)x=100;
	else x=0;
	printf("%d",x);
	
    return 0;
}