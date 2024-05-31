#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,c=0;
        cin>>a>>b>>n;
        do
        {

            if(a>b)
            {
              b+=a;
            }
            else
            {
              a+=b;
            }
            c++;

        }
        while(max(a,b)<=n);
        cout<<c<<endl;

    }
    return 0;
}
