#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,temp,r,m;
    int x[2];
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {-
       long long int i=0,p=0;
        temp=-n;
        p=-n;
        while(temp!=0)
        {
            r=temp%10;
            x[i]=r;
            temp=temp/10;
            if(i==3)
            {
                break;

            }
            i++;
        }

        if(x[0]>x[1])
        {
             cout<<-p/10<<endl;
        }
        else
        {
            m=p/100;
            p=(m*10)+x[0];
            cout<<-p<<endl;
        }

    }
}
