#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i,c,k,sum1=0, sum2=0;
    cin>>n;
    long long int x[n],p[n],q[n];
    c=0;
    k=0;
    for(i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i]>0)
        {
            p[c]=x[i];
            c++;
        }
        else
        {
          q[k]=x[i];
          k++;
        }
     }

        for(i=0; i<c; i++)
        {
            sum1=sum1+abs(p[i]-1);
        }


        if(k%2==0)
        {

           for(i=0; i<k; i++)
           {
               sum2=sum2+abs(q[i]+1);
           }
        }
        else
        {
            sort(q,q+k);
            sum2=abs(q[k-1]-1);
            for(i=0; i<k-1; i++)
            {
                sum2=sum2+abs(q[i]+1);
            }
        }

        cout<<sum1+sum2<<endl;



}
