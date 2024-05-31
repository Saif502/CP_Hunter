#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1;
    while(1)
    {
        int n;
        string x;
        cin>>x>>n;
        if(n==90){
            break;
        }
        else if(n<20){
            continue;
        }
        else if(n>20){

            cout<<c<<". "<<x<<" "<<n;
            c++;
        }

    }


}
