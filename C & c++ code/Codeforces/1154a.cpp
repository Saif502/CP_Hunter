#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[100];
    int i,s=0,j;
    for(i=0; i<4; i++)
    {
        cin>>x[i];
    }
    sort(x, x+4);
     for(i=0; i<4; i++)
     {
         s=x[3]-x[i];

         if(s==0)
         {
             break;
         }
         cout<<s<<" ";
     }
}
