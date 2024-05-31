#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,time,i;
     int sum=0,c=0;
    cin>>n>>k;
    time=240-k;
     for(i=1;i<=n;i++)
        {
          sum=sum+5*i;
          if(sum<=time)
          {
             c++;
          }
          else{
            break;
          }
        }


    cout<<c;



    return 0;
}
