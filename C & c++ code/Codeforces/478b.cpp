#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b;
     cin>>a>>b;
     long long  int x,s,k;
     x=(a-(b-1));
     s=x*(x-1);
     k=s/2;
     if(b<2)
     {
          cout<<k<<" "<<k<<endl;
     }
     else
     {
         cout<<(b*(a/b-1)+(a%b)*2)*(a/b)/2<<" "<<k<<endl;
     }

}
