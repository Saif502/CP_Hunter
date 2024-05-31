#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
    {
       int n,c=0;
       cin>>n;;
       while(n%6==0){
           n=n/6;
           c++;
       }
       while(n%3==0){
           n=n/3;
           c=c+2;
       }
       if(n==1)
       cout<<c<<endl;
       else
       cout<<"-1"<<endl;
   }
    return 0;
}
