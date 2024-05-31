#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int b,m,c;
        cin>>b>>m>>c;
        int h,f;
        cin>>h>>f;
        int x;

        if((m+c)*2<b)
        {
           x=(m*h)+(c*f);
        }
        else
        {
            if(h>f)
            {
               if(m*2<=b)
               {
                   int p=(b-(m*2))/2;
                   x=(m*h)+(p*f);
               }
               else
               {

                   x=((b/2)*h);
               }
            }
            else
            {
               if(c*2<=b)
               {
                   int p=(b-(c*2))/2;
                   x=(c*f)+(p*h);
               }
               else
               {

                   x=((b/2)*f);
               }
            }
        }

        cout<<x<<endl;
    }
}
