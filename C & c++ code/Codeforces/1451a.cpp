#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
       if(n<=3)
       {
           cout<<n-1<<endl;
       }
       else
       {
           if(n%2==0)
           {
               cout<<"2"<<endl;
           }
           else
           {
               cout<<"3"<<endl;
           }
       }

    }
}
