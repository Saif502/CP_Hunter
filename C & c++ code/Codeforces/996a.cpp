#include<iostream>
using namespace std;
int main()
{

    int i,n,k=0,b;
    cin>>n;

        k=n/100;
        b=n%100;
        k=k+b/20;
        b=b%20;
        k=k+b/10;
        b=b%10;
        k=k+b/5;
        b=b%5;
        k=k+b/1;
        cout<<k<<endl;

    return 0;
}
