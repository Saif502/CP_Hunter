#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,c=0;
        cin>>a;
         if(a%2==1)
         {
              cout<<"YES"<<endl;

         }
         else
         {

            b=a;
         while(b!=0)
         {
             b=b/2;

             if(b%2==1)
             {
                 c++;

             }
         }
         if(c>1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

         }


    }
}
