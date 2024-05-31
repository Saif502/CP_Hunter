#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,s;
    int a,b;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;

        if(a>b)
        {
           s=a-b;
           if(s%10==0)
           {
               cout<<s/10<<endl;
           }
           else
           {
               cout<<(s/10)+1<<endl;
           }
        }
        else if(b>a)
        {
           s=b-a;
           if(s%10==0)
           {
               cout<<s/10<<endl;
           }
           else
           {
               cout<<(s/10)+1<<endl;
           }
        }
        else
        {
           s=a%b;
           cout<<s<<endl;
        }
    }
}
