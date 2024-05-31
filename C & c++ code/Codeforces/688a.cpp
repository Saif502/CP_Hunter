#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
using namespace std;

int main()
{
      string x,y;
      cin>>x;
      y=x;
      reverse(y.begin(), y.end());
      cout<<x.append(y)<<endl;


}
