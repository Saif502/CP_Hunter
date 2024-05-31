#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[3],y[3],n,i;

    for(i=0; i<3; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<3; i++)
    {
         cin>>y[i];
    }
    cin>>n;

    int sum1=0,sum2=0;

     for(i=0; i<3; i++)
     {
         sum1+=x[i];
     }
     for(i=0; i<3; i++)
     {
         sum2+=y[i];
     }
     if(sum1%5==0)
     {
         sum1=sum1/5;

     }
     else
     {
         sum1=(sum1/5)+1;

     }

     if( sum2%10==0)
     {
         sum2=sum2/10;
     }
     else
     {
          sum2=(sum2/10)+1;
     }


     if((sum1+sum2)<=n)
     {
         cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }




}
