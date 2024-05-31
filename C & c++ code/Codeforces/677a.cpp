#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,k;
      cin>>n>>k;
      int x[n];
      int i, sum1=0,sum2=0;
      for(i=0; i<n; i++)
      {
            cin>>x[i];
            if(x[i]>k)
            {
                  sum1+=2;
            }
            else
            {
                  sum2+=1;
            }
      }

      cout<<sum1+sum2<<endl;
}
