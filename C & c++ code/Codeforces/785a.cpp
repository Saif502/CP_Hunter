#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    map<string,int>Mp;
    Mp["Tetrahedron"]=4;
    Mp["Dodecahedron"]=12;
    Mp["Icosahedron"]=20;
    Mp["Cube"]=6;
    Mp["Octahedron"]=8;
    string S;
    cin>>T;
    int sum=0;
    while(T--)
    {
        cin>>S;
        sum+=Mp[S];
    }

    cout<<sum<<endl;

return 0;

}
