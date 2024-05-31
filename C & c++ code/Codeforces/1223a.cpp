#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
      int n;
      cin>>n;
      if(n%2==0)
      {
          if(n<4)
          {
              cout<<n%4<<endl;
          }
          else{
            cout<<n%2<<endl;
          }

      }
      else{
        cout<<n%2<<endl;
      }
    }
}
