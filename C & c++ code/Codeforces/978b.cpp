#include <iostream>
using namespace std;
int main()
{
      int n;
      cin>>n;
      string x;
      cin>>x;
      int i,c=0,k=0;
      for(int i=0; i<n-1; i++)
      {
            if(x[i]=='x' && x[i+1]=='x')
            {
                  c++;
                  if(c>1) k++;

            }
            else
            {
                  c=0;
            }



      }
      cout<<k<<endl;

}
