#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            ll n,c=0,k=0,m=0,a=0,b=0,temp;
            ll i,j;
            cin>>n;
            if(n==1)
            {
                  c=0;
            }
            else
            {
                     temp=n;
                  while(temp!=1)
                  {
                        if(temp%2==0)
                        {
                              temp=temp/2;
                              c++;
                        }
                        else if((temp*2)%3==0)
                        {
                              temp=(temp*2)/3;
                              c++;
                        }
                        else if((temp*4)%5==0)
                        {
                              temp=(temp*4)/5;
                              c++;
                        }
                        else
                        {
                              c=-1;
                              break;
                        }
                  }
            }


      cout<<c<<endl;
      }

}
