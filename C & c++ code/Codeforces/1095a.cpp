#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    string s;
    cin>>s;

    k=1;
    for(i=0; i<n;)
    {

         cout<<s.at(i);
         i=i+k;
         k++;

    }




}
