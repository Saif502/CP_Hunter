#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int i,c=0,T;
    cin>>T;
    while(T--)
    {

        cin>>x;

        if(x[1]=='+')
        {
            ++c;
        }
        else
        {
            --c;
        }

    }
    cout<<c<<endl;
    return 0;

}
