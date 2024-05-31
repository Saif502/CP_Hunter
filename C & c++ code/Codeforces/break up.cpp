#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int n,m,k,sum=0,i;
    cin>>m>>n;
    int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};


        for(i=0; i<n-1; i++)
        {
            sum+=x[i];
        }
        k=(sum+m)-1;

    if(k%7==0)
        {
            cout<<"friday"<<endl;
        }
        else if(k%7==1)
        {
             cout<<"saturday"<<endl;
        }
        else if(k%7==2)
        {
             cout<<"sunday"<<endl;
        }
        else if(k%7==3)
        {
             cout<<"monday"<<endl;
        }
        else if(k%7==4)
        {
             cout<<"tuesday"<<endl;
        }
        else if(k%7==5)
        {
             cout<<"wednesday"<<endl;
        }
        else if(k%7==6)
        {
             cout<<"thursday"<<endl;
        }

}
