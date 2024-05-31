#include<iostream>
using namespace std;
int main()
{
    int a,j,k,l,d, c=0;
    int i;
    cin>>a>>j>>k>>l>>d;
    for(i=1; i<=d; i++){

        if(i%a==0 || i%j==0 || i%k==0 || i%l==0)
        {
          c++;
        }
    }
    cout<<c;
}
