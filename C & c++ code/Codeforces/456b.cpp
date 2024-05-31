#include<bits/stdc++.h>
using namespace std;
int main()
{
     string x;
     cin>>x;
     int n=x.size();
     int a=(x[n-2]-'0')*10+(x[n-1]-'0');

         if(a%4==0)
         {
              cout<<"4";
         }
         else
         {
              cout<<"0";
         }
         return 0;
}
