 #include<bits/stdc++.h>
int main()
{
    
    int a, b, i, j;
 
    scanf("%d%d",&a,&b);
    printf("Prime numbers between %d and %d are:\n",a,b);

    if (a <= 2)
    {
        a = 2;
        if (b >= 2) {
            printf("%d \n",a);
            a++;
        }
    }
    if (a%2==0)a++;
        
    for (i = a; i <= b; i+=2) {
        bool flag = 1;
        for (j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
           printf("%d \n",i);
    }
 
    return 0;
}          

    
