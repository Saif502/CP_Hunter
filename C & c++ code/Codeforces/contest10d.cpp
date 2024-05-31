#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i,j;
        cin>>n;
        int x[n];
        for(i=0; i<n; i++)
        {
            cin>>x[i];
        }
         for(i=0,j=i+1; i<n, j<n; i++,j++)
         {
             if(x[i]!=x[j])
             {
                 if(x[0]!=x[1] && x[0]!=x[2])
                 {
                     cout<<"1"<<endl;
                     break;
                 }
                 else
                 {
                     cout<<i+2<<endl;
                      break;
                 }

             }
         }


    }
}
