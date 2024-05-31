#include<bits/stdc++.h>
using namespace std;
int main()
{
          int x[4],s=0;
             for(int i=0;i<4;i++)
             {
             cin>>x[i];
             s+=x[i];
             }
         if(s%2==0)
         {
              sort(x,x+4);
              if(x[0]+x[3]==x[1]+x[2] || x[3]==x[0]+x[1]+x[2])
              {
                   cout<<"YES"<<endl;
              }
              else
              {
                   cout<<"NO"<<endl;
              }
         }
         else
         {
              cout<<"NO"<<endl;
         }

}
