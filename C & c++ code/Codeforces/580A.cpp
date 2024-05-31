#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j=0,c=1,n,m=1;
    scanf("%d",&n);
    int x[n];
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }

    for(i=0; i<n-1; i++){
      if(x[i+1] >= x[i]){
       ++c;
       m=max(m,c);



      }
      else{
        c=1;

      }

     }

     cout<<m<<endl;


}
