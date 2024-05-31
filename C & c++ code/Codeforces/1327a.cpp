#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          long long int a,b,x;
          cin>>a>>b;

              x=sqrt(a);

               if(a%2==0 && b%2==0 || a%2==1 && b%2==1)
               {
                    if(x<b)
                         {
                              cout<<"NO"<<endl;
                         }
                    else

                         {
                             cout<<"YES"<<endl;
                         }
               }
               else
               {
                    cout<<"NO"<<endl;
               }

     }
}
