#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        long long int x=pow(10,a-1);
        long long int y=pow(10,b-1);
        long long int z=pow(10,c-1);

        cout<<x+z<<" "<<y<<endl;

    }

}
