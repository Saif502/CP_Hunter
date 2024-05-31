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
        int i,c=0,k=0;
        for(i=0; i<x.size(); i++)
        {
            if(x[i]=='0')
            {
                c++;
            }
            else
            {
                k++;
            }
        }

         if(c>k)
         {

            if(k%2==0)
            {
               cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }
         }
         else
         {

            if(c%2==0)
            {
               cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }
         }



    }
}
