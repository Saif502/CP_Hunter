#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
        int a,b;
    cin>>a>>b;
    if(a<b)
    {
       int x=b-a;
       if(x%2==0)
       {
          cout<<"2"<<endl;
       }
       else
       {
           cout<<"1"<<endl;
       }

    }
    else if(a==b)
    {
        cout<<a-b<<endl;
    }
    else
    {
        int x=a-b;
        if(x%2==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
             cout<<"2"<<endl;
        }
    }
   }
}
