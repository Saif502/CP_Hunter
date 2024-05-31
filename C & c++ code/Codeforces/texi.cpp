#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,d=0,i;
    cin>>n;
    int x[n];
    i=0;
    while(i<n)
    {
        cin>>x[i];
        if(x[i]==1) a++;
        if(x[i]==2) b++;
        if(x[i]==3) c++;
        if(x[i]==4) d++;
        i++;

    }
    int sum=0;
    sum=sum+d;

    sum=sum+b/2;
    b=b%2;
    if(c>=a)
    {
        sum=sum+a;
        c=c-a;
        a=0;


    }

    else if(c<a)
    {
        sum=sum+c;
        a=a-c;
        c=0;
        sum=sum+a/4;
        a=a%4;
         if(a+b*2<=4 && a+b*2>0)
            {
                sum=sum+1;
                a=0;
                b=0;
            }
    }
    if(a==3 && b==1)
    {
        sum=sum+2;
        a=0;
        b=0;
    }


    cout<<sum+b+c<<endl;

}
