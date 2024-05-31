#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        long long int n;
        cin>>n;
        int q[n];
        long long int c=0,x,a=0,k=0;
        long long int temp=n;
        while(temp!=0)
        {
            x=temp%10;
            for(int i=1; i<=c; i++)
            {
                 x=x*10;
            }

            if(x>0)
            {

              q[k]=x;


            }
            else
            {
                temp=temp/10;
                 ++c;
                 continue;
            }

            temp=temp/10;
            ++c;
            k++;

        }
         cout<<k<<endl;
        for(int i=0; i<k; i++)
        {
             cout<<q[i]<<" ";
        }
        cout<<endl;
     }

}
