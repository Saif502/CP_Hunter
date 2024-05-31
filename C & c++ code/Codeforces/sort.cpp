#include <stdio.h>
int c;
void f1();
void f2();
int main()
{
	c=10;
	f1();
	return 0;
}
void f1()
{
	int t;
	t=c;
	f2();
	printf("c is %d",c);
	printf("end f1");
}
void f2()
{
	int c;
	for(c=1;c<10;c++)
	putchar('.');
	printf("end f2 ");
}
/*
int main() {
  int n, rev=0, rem, ori;
    scanf("%d", &n);
    ori = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
       //printf("%d\n", rev);
        n /= 10;
    }
    if (ori == rev)
        printf("%d is a palindrome.", ori);
    else
        printf("%d is not a palindrome.", ori);

    return 0;
}
/*
#include<bits/stdc++.h>
int main()
{
	
	int i=0,j;
	char x[100];
    gets(x);
    j=strlen(x)-1;
	while(j>i)
	{
		if(x[i++]!=x[j--])
		{
			printf("%s is not a palindrome \n",x);
			return 0;
		}
	}
	printf("%s is a palindrome \n",x);	
	
}
*/