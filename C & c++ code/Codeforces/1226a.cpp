#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        if(a<=2)
        {
            cout<<"1"<<endl;
        }
        else{
            int x=a-2;
        if(x%b==0)
        {
            cout<<(x/b)+1<<endl;
        }
        else
        {
           cout<<(x/b)+2<<endl;
        }
        }

    }
}
