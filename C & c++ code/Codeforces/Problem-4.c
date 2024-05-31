#include<bits/stdc++.h>
int main()
{
    int Mn,Mx,range,n,k;
    printf("Enter a value\n");
    scanf("%d",&k);
    printf("Enter %d numbers\n", k);
    Mn=99999999;
    Mx=-9999999;
    while(k--)
    {
        scanf("%d", &n);
        if(n > Mx) Mx = n;
        if(n< Mn) Mn = n;
    }
    range = Mx - Mn;
    printf("Range is %d\n",range);

}


