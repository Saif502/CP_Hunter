#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,T;
    cin>>T;
    while(T--)
    {
        int i,m;
        cin>>n;
        for(i=2;;i++)
        {
           m=pow(2,i)-1;
           if(n%m==0)
           {
               cout<<n/m<<endl;
               break;
           }
        }
    }
}
