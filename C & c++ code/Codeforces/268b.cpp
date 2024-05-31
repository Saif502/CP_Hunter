#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i, sum=0;
    for(i=1; i<n; i++)
    {
        sum=sum+(n-i)*i;
    }
    cout<<sum+n<<endl;
}
