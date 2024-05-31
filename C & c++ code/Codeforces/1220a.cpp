#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      ll m,n=0,c=0,k=0,a=0,b=0,temp,MAX=0,MIN=999999999;
      ll i,j;
      cin>>n;
      string x;
      cin>>x;
      ll MI=0;
      for(i=0; i<x.size(); i++)
      {
            if(x[i]=='z') c++;
            if(x[i]=='e') k++;
            if(x[i]=='r') a++;
            if(x[i]=='o') b++;
            if(x[i]=='n') n++;
      }

       MI=min(min(c,k),min(a,b));

       if(k>MI && b>MI && n>0)
      {
            MIN=min(min((k-MI),(b-MI)),n);
              for(i=1; i<=MIN; i++)
            {
                cout<<"1"<<" ";
            }
      }
      if(MI>0)
      {
            m=MI;
            for(i=1; i<=MI; i++)
            {
               cout<<"0"<<" ";
            }
      }

      cout<<endl;






}
