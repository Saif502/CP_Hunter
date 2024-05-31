#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, c=0, k=0;
    cin>>n;
    long long int x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    long long int q=0;
    for(i=0; i<n-1; i++)
    {
        if(x[i+1]>x[i])
           {
             ++c;
             q=max(q,c);
           }
           else{
            c=0;

           }

     }

    cout<<q+1<<endl;
}
