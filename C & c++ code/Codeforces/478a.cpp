#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[5];
    int i,sum=0;
    for(i=0; i<5; i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    if(sum%5==0 && sum!=0)
    {
        cout<<sum/5<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
