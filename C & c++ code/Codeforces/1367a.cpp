#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          string x;
          cin>>x;
          cout<<x[0];
          for(int i=1; i<x.size(); i+=2)
          {
               cout<<x[i];
          }
          cout<<endl;

     }
}
